/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 13:32:55 by anhebert          #+#    #+#             */
/*   Updated: 2022/07/06 09:29:59 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <unistd.h>
# include <errno.h>
# include <fcntl.h>
# include <string.h>
# include "../libft/libft.h"

typedef struct t_vars
{
	char	**all_cmd_paths;
	char	*cmd_path;
	char	**cmd;
	int		cmd_size;
	int		all_cmd_paths_size;
}		t_vars;

int			ft_retrieve_cmd_path(t_vars *vars, char *cmd);
void		ft_retrieve_paths_n_cmd(t_vars *vars, char **envp, char *cmd);
void		ft_free_tabs(char **str, int size);
void		ft_free_stuff(t_vars *vars);
#endif