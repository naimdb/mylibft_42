/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:56:34 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/08 19:14:45 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nb_convert(char c)
{
	int	nb;

	nb = 0;
	while (CONVERT_STR[nb] != c)
		nb++;
	return (nb);
}

int	ft_what_convert(int nb_convert, va_list args)
{
	int	(*tab_convert[9])(va_list);
	int	nb;

	tab_convert[0] = &ft_convert_char;
	tab_convert[1] = &ft_convert_str;
	tab_convert[2] = &ft_convert_ptr;
	tab_convert[3] = &ft_convert_int;
	tab_convert[4] = &ft_convert_int;
	tab_convert[5] = &ft_convert_uint;
	tab_convert[6] = &ft_convert_hexa_lower;
	tab_convert[7] = &ft_convert_hexa_upper;
	tab_convert[8] = &ft_convert_cent;
	nb = tab_convert[nb_convert](args);
	return (nb);
}

int	ft_parse(char c, va_list args)
{
	int	nb_char;

	nb_char = 0;
	if (ft_strrchr(CONVERT_STR, c))
	{
		nb_char = ft_what_convert(ft_nb_convert(c), args);
	}
	else
		return (-1);
	return (nb_char);
}
