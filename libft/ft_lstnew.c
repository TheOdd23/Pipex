/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:29:05 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/05 12:46:16 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue de la mémoire et initialise le contenu de la nouvelle node avec
 * le 'content' passé en paramètre*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
