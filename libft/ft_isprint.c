/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:42:02 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 13:54:18 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Vérifie si la string passée en paramètre est composée
 * à 100% de charactères imprimables*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
