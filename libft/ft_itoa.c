/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:43:28 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/04 13:06:04 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Retourne une string représentant l'int passé en paramètre*/

#include "libft.h"

char	*ft_res(char *res, long int nb, int i)
{	
	if (nb > 0)
	{
		while (i >= 0)
		{
			res[i] = (nb % 10) + 48;
			nb /= 10;
			i--;
		}
	}
	else if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
		while (i > 0)
		{
			res[i] = (nb % 10) + 48;
			nb /= 10;
			i--;
		}
	}
	return (res);
}

int	ft_intlen(long int nb)
{
	int	intlen;

	intlen = 1;
	if (nb < 0)
	{
		intlen += 1;
		nb *= -1;
	}
	while (nb >= 10)
	{
		nb /= 10;
		intlen++;
	}
	return (intlen);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	nb;
	char		*res;

	nb = n;
	i = ft_intlen(nb);
	res = malloc((sizeof(char) * i) + 1);
	if (res == NULL)
		return (NULL);
	res[i] = '\0';
	i--;
	if (nb == 0)
	{
		res[0] = '0';
		return (res);
	}
	return (ft_res(res, nb, i));
}
