/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:09:40 by anhebert          #+#    #+#             */
/*   Updated: 2022/04/04 09:10:19 by anhebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Retourne un array de strings, dont chaque string
 * sera composée des charactères délimités par le
 * charactère passé en paramètre*/

#include "libft.h"

static int	ft_wordlen(char const *str, int counter, char c)
{
	int	i;

	i = 0;
	while (counter >= 0 && str[counter] != c)
	{
		counter--;
		i++;
	}
	return (i);
}

static char	*ft_words(char const *str, char c, int counter)
{
	int		i;
	int		wordlen;
	int		j;
	char	*word;

	i = 0;
	wordlen = ft_wordlen(str, counter, c);
	j = (counter - wordlen) + 1;
	word = ft_calloc(wordlen + 1, sizeof(char));
	while (j <= counter)
	{
		word[i] = str[j];
		i++;
		j++;
	}
	return (word);
}

static int	ft_nb_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != c && str[i + 1] == c)
			|| (str[i] != c && str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**nouv;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	nouv = ft_calloc(ft_nb_words(s, c) + 1, sizeof(char *));
	if (nouv == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				nouv[j] = ft_words(s, c, i);
				j++;
			}
		}
		i++;
	}
	return (nouv);
}
