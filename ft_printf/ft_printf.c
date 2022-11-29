/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:57:49 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/08 16:17:49 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		nb_char;
	int		i;

	nb_char = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			nb_char += ft_parse((char)str[i + 1], args);
			i += 2;
		}
		else
		{
			ft_putchar_fd((char)str[i], 1);
			i++;
			nb_char++;
		}
	}
	va_end(args);
	return (nb_char);
}
