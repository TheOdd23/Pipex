/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:18:50 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/31 16:34:57 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Retourne un fragment de la string, qui
 * commence par start et qui est de taille len*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nouv;
	size_t	i;
	size_t	j;
	size_t	slen;

	i = start;
	j = 0;
	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (len > slen)
		len = slen;
	nouv = ft_calloc(sizeof(char), len + 1);
	if (nouv == NULL)
		return (NULL);
	while (i < slen && j < len)
	{
		nouv[j] = s[i];
		i++;
		j++;
	}
	return (nouv);
}
