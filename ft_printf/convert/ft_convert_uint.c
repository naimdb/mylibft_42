/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_uint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:54:30 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/08 20:10:11 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_convert_uint(va_list args)
{
	unsigned long long	res;

	res = va_arg(args, unsigned int);
	if (res < 0)
	{
		ft_putchar_fd('-', 1);
		ft_putnbr_fd(res * -1, 1);
		return (ft_intlen(res * -1) + 1);
	}
	else
	{
		ft_putnbr_fd(res, 1);
		return (ft_intlen(res));
	}
}
