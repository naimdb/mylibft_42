/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:52:04 by nadel-be          #+#    #+#             */
/*   Updated: 2022/10/19 14:16:01 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Find the first occurrence of char

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s[i] != (char)c && str[i] != '\0')
		i++;
	if (s[i] == (char)c)
	{
		return (&s[i]);
	}
	return (NULL);
}
