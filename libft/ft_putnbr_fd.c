/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:55:17 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 14:00:14 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Écrit l'int dans le file descriptor passé en paramètre*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		res;
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		res = nb + 48;
		ft_putchar_fd(res, fd);
	}
}
