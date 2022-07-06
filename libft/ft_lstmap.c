/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:04:18 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/05 12:48:30 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Crée une nouvelle liste résultant de l'application
 * de la fonction 'f' sur le contenu de chaque node
 * de la liste passée en paramètre et détruit avec del
 * le contenu d'un élément si nécessaire*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*n_lst;
	t_list	*n_cont;

	if (!lst || !f)
		return (NULL);
	n_lst = NULL;
	while (lst)
	{
		n_cont = ft_lstnew(f(lst->content));
		if (!n_cont)
		{
			if (!del)
				return (NULL);
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, n_cont);
		lst = lst->next;
	}
	return (n_lst);
}
