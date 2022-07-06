/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:02:49 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/06 09:04:56 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Retourne la longueur de la concaténation des 
 * strings passées en paramètre*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	j = destlen;
	if (size == 0)
		return (srclen);
	if (size < destlen)
		return (size + srclen);
	while (src[i] && size - 1 > j)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (destlen + srclen);
}
