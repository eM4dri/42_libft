/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emadriga <emadriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 22:33:25 by emadriga          #+#    #+#             */
/*   Updated: 2023/03/02 11:08:44 by emadriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	total_words;

	total_words = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			total_words ++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (total_words);
}

static char	**freematrix(char **matrix, size_t index)
{
	while (index--)
		free(matrix[index]);
	free(matrix);
	return (NULL);
}

static char	**get_words(char const *s, char c, char **out, \
						const size_t	total_words)
{
	size_t	index;
	size_t	len_word;

	index = 0;
	while (*s != '\0' && index < total_words)
	{
		if (*s == c)
			s++;
		else
		{
			len_word = 0;
			while (s[len_word] != c && s[len_word] != '\0')
				len_word++;
			out[index] = ft_substr(s, 0, len_word);
			if (!out[index])
				return (freematrix(out, index));
			s = s + len_word;
			index++;
		}
	}
	return (out);
}

char	**ft_split(char const *s, char c)
{
	const size_t	total_words = count_words(s, c);
	char			**out;

	if (!s)
		return (NULL);
	out = ft_calloc(sizeof(char *), total_words + 1);
	if (!out)
		return (NULL);
	out[total_words] = 0;
	return (get_words(s, c, out, total_words));
}
