/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_freedouble.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emadriga <emadriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:50:03 by emadriga          #+#    #+#             */
/*   Updated: 2023/03/02 11:12:13 by emadriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * * ft_strjoin wich free both inputs
 * @param s1	string to join
 * @param s2	string to join
*/
char	*ft_strjoin_freedouble(char *s1, char *s2)
{
	const size_t	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	char			*join;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	join = ft_calloc(sizeof(char), len);
	if (!join)
		return (0);
	ft_strlcat(join, s1, len);
	ft_strlcat(join, s2, len);
	free(s1);
	free(s2);
	return (join);
}
