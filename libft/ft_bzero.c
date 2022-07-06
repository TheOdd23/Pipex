/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:33:42 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/04 12:54:45 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Met à 0 n nombre de bytes dans la string passée en paramètre*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}
