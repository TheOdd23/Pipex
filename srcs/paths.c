/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:19:24 by anhebert          #+#    #+#             */
/*   Updated: 2022/07/06 09:30:57 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/pipex.h"

int	ft_nb_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != c && str[i + 1] == c)
			|| (str[i] != c && str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

void	ft_retrieve_paths_n_cmd(t_vars *vars, char **envp, char *cmd)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (ft_strncmp(envp[i], "PATH=", 5) != 0)
	{
		i++;
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
			res = 1;
	}
	if (res == 0)
	{
		write(2, "PATH couldn't be found in environment\n", 39);
		exit (0);
	}
	vars->all_cmd_paths = ft_split(envp[i] + 5, ':');
	vars->all_cmd_paths_size = ft_nb_words(envp[i] + 5, ':');
	vars->cmd = ft_split(cmd, ' ');
	vars->cmd_size = ft_nb_words(cmd, ' ');
}

int	ft_retrieve_cmd_path(t_vars *vars, char *cmd)
{
	char	*temp;
	int		i;

	i = -1;
	while (++i < vars->all_cmd_paths_size)
	{
		temp = ft_strjoin(vars->all_cmd_paths[i], "/");
		vars->cmd_path = ft_strjoin(temp, cmd);
		free (temp);
		if (access(vars->cmd_path, F_OK | X_OK) == 0)
			return (0);
		free(vars->cmd_path);
	}
	write(2, "command not found: ", 20);
	write(2, cmd, ft_strlen(cmd));
	write(2, "\n", 1);
	ft_free_stuff(vars);
	return (1);
}
