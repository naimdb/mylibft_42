/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:25:14 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/08 16:48:14 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base_fd(unsigned long long nbr, char *base, int fd)
{
	unsigned long long	nb;
	int					baselen;

	nb = nbr;
	baselen = ft_strlen(base);
	if (ft_check_base(base))
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', 1);
			nb = -nb;
		}
		if (nb > (unsigned long long)baselen - 1)
		{
			ft_putnbr_base_fd(nb / baselen, base, fd);
			ft_putnbr_base_fd(nb % baselen, base, fd);
		}
		else
			ft_putchar_fd(base[nb % baselen], 1);
	}
}
