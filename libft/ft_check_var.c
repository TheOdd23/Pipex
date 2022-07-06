/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_var.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:27:00 by anhebert          #+#    #+#             */
/*   Updated: 2022/05/27 08:21:50 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_var(va_list ap, const char var)
{
	int	len;

	len = 0;
	if (var == 'c')
		len = ft_printchar(va_arg(ap, int));
	else if (var == 's')
		len = ft_printstr(va_arg(ap, char *));
	else if (var == 'p')
		len = ft_printptr(va_arg(ap, void *));
	else if (var == 'd' || var == 'i')
		len = ft_printnbr(va_arg(ap, int));
	else if (var == 'u')
		len = ft_printunbr(va_arg(ap, unsigned int));
	else if (var == 'x' || var == 'X')
		len = ft_printhex(va_arg(ap, unsigned int), var);
	else if (var == '%')
		len = ft_printchar('%');
	return (len);
}
