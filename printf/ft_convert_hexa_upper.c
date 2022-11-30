/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa_upper.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:33:03 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/30 13:07:54 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_convert_hexa_upper(va_list args)
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
	ft_putnbr_base_fd(res, "0123456789ABCDEF", 1);
	return (ft_intlen_base(res, "0123456789ABCDEF"));
}
