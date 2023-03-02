/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emadriga <emadriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:01:18 by emadriga          #+#    #+#             */
/*   Updated: 2023/03/02 11:13:11 by emadriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const size_t	dst_len = ft_strlen(dst);
	const size_t	src_len = ft_strlen(src);
	size_t			i;

	if (dst_len < dstsize)
	{
		i = 0;
		while (i < dstsize - dst_len - 1 && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	return (src_len + dst_len);
}
