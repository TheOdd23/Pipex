/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:35:56 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 13:53:21 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Vérifie si la string passée en paramètre est composée
 * à 100% de charactères alphanumériques*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
