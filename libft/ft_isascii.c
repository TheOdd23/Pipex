/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:40:24 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 13:53:43 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Vérifie si la string passée en paramètre est composée
 * à 100% de charactères ascii*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
