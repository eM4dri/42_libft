/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emadriga <emadriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:10:52 by emadriga          #+#    #+#             */
/*   Updated: 2023/03/02 11:22:23 by emadriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	const size_t	len_s1 = ft_strlen(s1) + 1;
	char			*copy;

	copy = malloc(sizeof(char) * len_s1);
	if (!copy)
		return (0);
	ft_memcpy(copy, s1, len_s1);
	return (copy);
}
