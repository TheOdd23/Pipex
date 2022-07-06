/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:25:47 by anhebert          #+#    #+#             */
/*   Updated: 2022/07/06 09:30:41 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

// Vérifier tous les leaks
void	ft_execute_cmd(t_vars *vars, char **envp, int fd_file)
{
	if (ft_retrieve_cmd_path(vars, vars->cmd[0]) == 1)
	{
		close(fd_file);
		exit (1);
	}
	if (execve(vars->cmd_path, vars->cmd, envp) == -1)
	{
		write(2, "Error, can't execute command\n", 30);
		free(vars->cmd_path);
		ft_free_stuff(vars);
		close(fd_file);
		exit (1);
	}
}

void	ft_child(int *fd, char **envp, char *file, char **av)
{
	t_vars	vars;
	int		i;
	int		fd_file;

	i = 0;
	fd_file = open(file, O_RDONLY);
	if (fd_file == -1)
	{
		printf("%s: %s\n", strerror(2), file);
		exit (1);
	}
	close(fd[0]);
	dup2(fd[1], 1);
	dup2(fd_file, 0);
	ft_retrieve_paths_n_cmd(&vars, envp, av[2]);
	ft_execute_cmd(&vars, envp, fd_file);
	free(vars.cmd_path);
	ft_free_stuff(&vars);
	close(fd_file);
	exit (0);
}

void	ft_parent(int *fd, char **envp, char *file, char **av)
{
	t_vars	vars;
	int		i;
	int		fd_file;

	i = 0;
	fd_file = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (fd_file == -1)
	{
		printf("%s: %s\n", strerror(9), file);
		exit(1);
	}
	close(fd[1]);
	dup2(fd[0], 0);
	dup2(fd_file, 1);
	ft_retrieve_paths_n_cmd(&vars, envp, av[3]);
	ft_execute_cmd(&vars, envp, fd_file);
	free(vars.cmd_path);
	ft_free_stuff(&vars);
	close(fd_file);
}

int	main(int ac, char **av, char **envp)
{
	int	child;
	int	fd[2];

	if (ac == 5)
	{
		if (pipe(fd) == -1)
		{
			printf("%s\n", strerror(32));
			return (1);
		}
		child = fork();
		if (child < 0)
		{
			printf("%s\n", strerror(10));
			return (1);
		}
		if (child == 0)
			ft_child(fd, envp, av[1], av);
		waitpid(child, NULL, 0);
		ft_parent(fd, envp, av[4], av);
		return (0);
	}
	write(2, "Wrong number of arguments\n", 27);
	return (0);
}
