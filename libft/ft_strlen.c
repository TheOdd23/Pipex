/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:07:04 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 14:02:51 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Retourne la longueur de la string passée en paramètre*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}
