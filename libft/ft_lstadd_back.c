/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:24:43 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/05 12:44:37 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ajoute la node 'new' à la fin de la liste*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{	
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
