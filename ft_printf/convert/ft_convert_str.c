/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:53:15 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/09 15:42:04 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_convert_str(va_list args)
{
	char	*tmp;

	tmp = va_arg(args, char *);
	if (!tmp)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(tmp, 1);
	return (ft_strlen(tmp));
}
