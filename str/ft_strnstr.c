/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:14:02 by nadel-be          #+#    #+#             */
/*   Updated: 2022/10/13 17:31:00 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0' || needle == NULL)
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == needle[j] && i + j < n)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
