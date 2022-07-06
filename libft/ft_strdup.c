/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:58:00 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/31 15:12:29 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue de la mémoire pour faire une copie de la string passée en
 * paramètre et la renvoie*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;	
	char	*dest;

	dest = malloc(ft_strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
