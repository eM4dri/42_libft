/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emadriga <emadriga@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:12:02 by emadriga          #+#    #+#             */
/*   Updated: 2022/09/30 12:53:45 by emadriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*out;
	const size_t	len = (count * size);

	if (!len)
		return (NULL);
	if (len / size != count)
		return (NULL);
	out = malloc(len);
	if (!out)
		return (NULL);
	ft_bzero(out, len);
	return (out);
}
