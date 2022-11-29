/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:58:20 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/08 19:14:39 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

# define CONVERT_STR "cspdiuxX%"

int		ft_printf(const char *fmt, ...);

int		ft_parse(char c, va_list args);

int		ft_convert_cent(va_list args);
int		ft_convert_char(va_list args);
int		ft_convert_str(va_list args);
int		ft_convert_ptr(va_list args);
int		ft_convert_int(va_list args);
int		ft_convert_hexa_lower(va_list args);
int		ft_convert_hexa_upper(va_list args);
int		ft_convert_uint(va_list args);

#endif