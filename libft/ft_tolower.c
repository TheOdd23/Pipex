/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:20:44 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 14:04:30 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Met toutes les lettres majuscules en minuscules*/

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
		ch += 32;
	return (ch);
}
