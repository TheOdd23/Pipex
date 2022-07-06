/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:21:29 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 14:04:47 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Met toutes le lettres minuscules en majuscules*/

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		ch -= 32;
	return (ch);
}
