/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:41:09 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/06 07:40:18 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Vérifie si la string passée en paramètre est composée
 * à 100% de charactères numérique*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
