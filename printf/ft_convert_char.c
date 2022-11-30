/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:39:22 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/30 13:07:48 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_convert_char(va_list args)
{
	ft_putchar_fd(va_arg(args, int), 1);
	return (1);
}
