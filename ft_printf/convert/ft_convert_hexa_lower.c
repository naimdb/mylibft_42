/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa_lower.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:29:57 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/08 20:08:21 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_convert_hexa_lower(va_list args)
{
	unsigned long long	res;
	unsigned int		hexa;

	hexa = va_arg(args, unsigned int);
	res = hexa;
	if (!hexa)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	ft_putnbr_base_fd(res, "0123456789abcdef", 1);
	return (ft_intlen_base(res, "0123456789abcdef"));
}
