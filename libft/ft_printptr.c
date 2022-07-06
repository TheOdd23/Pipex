/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:34:46 by anhebert          #+#    #+#             */
/*   Updated: 2022/05/12 09:38:14 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printhexptr(unsigned long nb, int *len, char *base)
{
	if (nb >= 16)
		ft_printhexptr((nb / 16), len, base);
	write(1, &base[nb % 16], 1);
	*len += 1;
}

int	ft_printptr(void *ptr)
{
	int				len;
	unsigned long	adr;

	adr = (unsigned long)ptr;
	len = 2;
	write(1, "0x", 2);
	ft_printhexptr(adr, &len, "0123456789abcdef");
	return (len);
}
