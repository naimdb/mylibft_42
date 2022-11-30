/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:18:02 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/30 12:56:21 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// int	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	if (str == 0)
// 		return (0);
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// void	*ft_calloc(size_t count, size_t size)
// {
// 	void	*res;
// 	size_t	i;

// 	res = (void *)malloc(count * size);
// 	if (res == 0)
// 		return (0);
// 	i = 0;
// 	while (i < count * size)
// 	{
// 		((unsigned char *)res)[i] = 0;
// 		i++;
// 	}
// 	return (res);
// }

char	*ft_strchr_gnl(const char *str, int c)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	if (!str)
		return (NULL);
	while (s[i] != (char)c && str[i] != '\0')
		i++;
	if (s[i] == (char)c)
	{
		return (&s[i]);
	}
	return (NULL);
}

char	*ft_strjoin_gnl(char const *stock, char const *s2)
{
	char			*res;

	if (!stock)
		stock = ft_calloc(sizeof(*res), 1);
	if (!stock || !s2)
		return (NULL);
	else
	{
		if (ft_strlen(stock) + ft_strlen(s2) > 0)
		{
			res = ft_calloc(sizeof(*res), ft_strlen(stock) + ft_strlen(s2) + 1);
			if (res == 0)
				return (0);
			ft_strcat(res, (char *)stock);
			ft_strcat(res, (char *)s2);
		}
		else
		{
			res = ft_calloc(sizeof(char), 1);
			free((char *)stock);
			return (res);
		}
	}
	free((char *)stock);
	return (res);
}
