/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emadriga <emadriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:27:59 by emadriga          #+#    #+#             */
/*   Updated: 2023/03/02 11:09:53 by emadriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const size_t	len_s = ft_strlen(s);
	char			*out;
	size_t			i;

	if (!s)
		return (NULL);
	if (len_s <= (size_t)start)
		return (ft_strdup(""));
	i = 0;
	if (len_s - start < len)
		len = len_s - start;
	out = ft_calloc(sizeof(char), (len + 1));
	if (!out)
		return (0);
	while (s[start + i] != '\0' && i < len)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
