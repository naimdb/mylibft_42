/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:13:43 by nadel-be          #+#    #+#             */
/*   Updated: 2022/10/13 13:28:57 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' '
		|| c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	minus;

	i = 0;
	res = 0;
	minus = 1;
	while (str[i] && ft_isspace(str[i]) == 1)
			i++;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-' && minus == 1)
			minus = -1;
		else if (str[i] == '-' && minus == -1)
			return (0);
		i++;
	}
	while (str[i] && ft_isdigit(str[i]) == 1)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * minus);
}
