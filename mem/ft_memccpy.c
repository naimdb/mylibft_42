/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:43:19 by nadel-be          #+#    #+#             */
/*   Updated: 2022/10/11 16:13:33 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		if (((const char *)src)[i] == (unsigned char)c)
			return ((void *)&((char *)dst)[i + 1]);
		i++;
	}
	return (NULL);
}
