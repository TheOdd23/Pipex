/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:39:10 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 13:52:56 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Vérifie si la string passée en paramètre est composée
 * à 100% de charactères alphas*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
