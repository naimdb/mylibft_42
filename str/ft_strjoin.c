/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:08:01 by nadel-be          #+#    #+#             */
/*   Updated: 2022/10/14 16:43:04 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	char			*res;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (len > 0)
	{
		res = ft_calloc(sizeof(*res), len + 1);
		if (res == 0)
			return (0);
		ft_strcat(res, (char *)s1);
		ft_strcat(res, (char *)s2);
	}
	else
	{
		res = ft_calloc(sizeof(char), 1);
		return (res);
	}
	return (res);
}
