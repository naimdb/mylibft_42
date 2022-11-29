/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:42:44 by nadel-be          #+#    #+#             */
/*   Updated: 2022/10/13 16:27:58 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1bis;
	unsigned char	*s2bis;

	i = 0;
	s1bis = (unsigned char *)s1;
	s2bis = (unsigned char *)s2;
	while ((s1bis || s2bis) && i < n)
	{
		if (s1bis[i] != s2bis[i])
			return (s1bis[i] - s2bis[i]);
		i++;
	}
	return (0);
}
