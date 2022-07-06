/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <anhebert@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:13:28 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/04 13:02:19 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Retourne une copie de la string passée en paramètre,
 * sans les charactères spécifiés dans set au début
 * et la fin de la string*/

#include "libft.h"

static int	ft_ischarset_up(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[i])
	{
		if (s1[j] == set[i])
		{
			j++;
			i = 0;
			if (s1[j] == '\0')
				return (-1);
		}
		else
			i++;
	}
	return (j);
}

static int	ft_ischarset_down(char const *s1, char const *set, int start)
{
	int	i;

	i = 0;
	start--;
	while (set[i])
	{
		if (s1[start] == set[i])
		{
			start--;
			i = 0;
		}
		else
			i++;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*s2;
	int		strsize;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_ischarset_up(s1, set);
	if (start == -1)
		return (ft_strdup(""));
	strsize = ft_strlen(s1);
	end = ft_ischarset_down(s1, set, strsize);
	s2 = malloc(sizeof(char) * (end - start + 1) + 1);
	if (s2 == NULL)
		return (NULL);
	while (start <= end)
	{
		s2[i] = s1[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
