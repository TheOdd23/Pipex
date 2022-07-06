/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:25:48 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/05 12:48:46 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ajoute la node 'new' au début de la liste*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
