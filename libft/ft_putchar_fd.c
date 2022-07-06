/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebertn@42quebec.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:53:29 by anhebert          #+#    #+#             */
/*   Updated: 2022/03/30 13:59:35 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Écrit le charactère c dans le file descriptor passé en paramètre*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
