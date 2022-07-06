/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:57:04 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 14:00:36 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Écrit l'ensemble de la string dans le file descriptor passé en paramètre*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
