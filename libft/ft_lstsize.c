/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:29:50 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/04 07:56:19 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compte le nombre de nodes dans une liste*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (lst == NULL)
		return (0);
	lst = lst->next;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
