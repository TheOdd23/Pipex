/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:54:25 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 13:59:53 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Écrit l'ensemble de la string dans le file descriptor passé en paramètre,
 * suivi d'un retour à la ligne*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	if (s == NULL)
	{
		write(fd, "\n", 1);
		return ;
	}
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
