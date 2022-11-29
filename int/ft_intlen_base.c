/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:00:45 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/09 14:57:39 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen_base(unsigned long long int nb, char *base)
{
	int	i;
	int	len_base;

	i = 0;
	len_base = ft_strlen(base);
	while (nb != 0)
	{
		nb /= len_base;
		i++;
	}
	return (i);
}
