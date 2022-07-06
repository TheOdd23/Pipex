/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:43:48 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/05 12:48:10 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Supprime et libère la node passée en paramètre et toutes les suivantes*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (lst != NULL)
	{
		while (*lst)
		{
			list = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = list;
		}
	}
}
