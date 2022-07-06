/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 06:51:49 by anhebert          #+#    #+#             */
/*   Updated: 2022/07/06 09:30:47 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	ft_free_stuff(t_vars *vars)
{
	if (vars->all_cmd_paths)
		ft_free_tabs(vars->all_cmd_paths, vars->all_cmd_paths_size);
	if (vars->cmd)
		ft_free_tabs(vars->cmd, vars->cmd_size);
}

void	ft_free_tabs(char	**str, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		free(str[i]);
	free(str);
}
