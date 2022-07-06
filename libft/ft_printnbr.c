/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:26:55 by anhebert          #+#    #+#             */
/*   Updated: 2022/05/04 07:54:08 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printnbr(int nbr)
{
	int		len;
	char	*num;

	num = ft_itoa_pf(nbr);
	len = ft_printstr(num);
	free (num);
	return (len);
}
