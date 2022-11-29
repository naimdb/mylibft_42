/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:50:33 by nadel-be          #+#    #+#             */
/*   Updated: 2022/10/14 11:10:31 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (len < dstsize)
		ft_memcpy((void *)dst, src, len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy((void *)dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (len);
}
