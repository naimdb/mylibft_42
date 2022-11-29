/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:45:01 by nadel-be          #+#    #+#             */
/*   Updated: 2022/10/23 16:52:15 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen((char *)s);
	if (start <= slen && slen - start <= len)
		res = ft_calloc(sizeof(*res), slen - start + 1);
	else if (start <= slen)
		res = ft_calloc(sizeof(*res), len + 1);
	else
	{
		res = ft_calloc(sizeof(*res), 1);
		return (res);
	}
	if (res == 0)
		return (NULL);
	while (i < len && s[start] != 0)
		res[i++] = s[start++];
	return (res);
}
