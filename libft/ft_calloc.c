/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:34:38 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/04 12:55:02 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue la mémoire nécessaire en mettant des 0 à tous les bytes*/

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*new;

	new = malloc(num * size);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, (num * size));
	return (new);
}
