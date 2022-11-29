/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:11:49 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/08 16:48:46 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(unsigned long long nb, int fd)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar_fd(nb + 48, fd);
	else if (nb > 9)
	{
		ft_putnbr_fd (nb / 10, fd);
		ft_putnbr_fd (nb % 10, fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(nb - nb - nb, fd);
	}
}
