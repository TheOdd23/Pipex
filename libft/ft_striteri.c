/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:59:11 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/31 16:34:13 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applique la fonction 'f' sur chaque charactère
 * de la string passée en paramètre*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (f == NULL || s == NULL)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
