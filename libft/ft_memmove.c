/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:02:57 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/31 15:10:56 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copie n bytes du bloc mémoire s1 dans le bloc 2 et le bloc deux conserve les
 * bytes excédant si s1 est plus petit que n*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if ((char *)dest == NULL && (char *)src == NULL)
		return (NULL);
	if ((char *)dest > (char *)src)
	{
		while (n-- > 0)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
