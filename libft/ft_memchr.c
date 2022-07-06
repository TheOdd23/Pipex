/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:47:09 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/31 15:10:43 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cherche la première occurence du
 * char passé en paramètre dans la
 * string passée en paramètre et renvoie
 * un pointeur vers sa première occurence*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;

	i = 0;
	while (n-- > 0)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return (((unsigned char *)str) + i);
		i++;
	}
	return (NULL);
}
