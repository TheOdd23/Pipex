/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:40:54 by anhebert          #+#    #+#             */
/*   Updated: 2022/05/03 09:00:40 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*stash_trim(char *stash)
{
	char	*trimmed;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (stash[0] == '\0')
	{
		free(stash);
		return (NULL);
	}
	while (stash[i] != '\n' && stash[i])
		i++;
	if (stash[i] == '\n')
		i++;
	trimmed = ft_calloc(sizeof(char), ((ft_strlen(stash) - i) + 1));
	while (stash[i])
		trimmed[j++] = stash[i++];
	free (stash);
	return (trimmed);
}

char	*create_new_line(char *stash)
{
	char	*new_line;
	int		i;
	int		j;

	i = 0;
	if (stash[0] == '\0')
		return (NULL);
	while (stash[i] != '\n' && stash[i])
		i++;
	if (stash[i] == '\n')
		i++;
	new_line = ft_calloc(sizeof(char), (i + 1));
	if (new_line == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		new_line[j] = stash[j];
		j++;
	}
	return (new_line);
}

char	*create_stash(char *stash, char *buffer)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	temp = ft_calloc(sizeof(char), (ft_strlen(stash) + ft_strlen(buffer) + 1));
	if (temp == NULL)
		return (NULL);
	while (stash[i])
	{
		temp[i] = stash[i];
		i++;
	}
	while (buffer[j])
		temp[i++] = buffer[j++];
	free (stash);
	return (temp);
}
