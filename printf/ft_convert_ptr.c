/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:11:20 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/30 13:08:09 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_convert_ptr(va_list args)
{
	unsigned long long	res;
	void				*ptr;

	ptr = va_arg(args, void *);
	res = (unsigned long long)ptr;
	if (!ptr)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	ft_putstr_fd("0x", 1);
	ft_putnbr_base_fd(res, "0123456789abcdef", 1);
	return (ft_intlen_base(res, "0123456789abcdef") + 2);
}
