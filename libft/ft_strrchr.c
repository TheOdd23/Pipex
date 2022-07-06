/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:28:15 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/31 15:14:50 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cherche et renvoie un pointeur à la position
 * de la dernière occurence du charactère dans
 * la string passée en paramètre*/

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)ch)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
