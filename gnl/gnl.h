/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:17:58 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/29 14:47:29 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);

void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(const char *str, int c);
int		ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
// char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strcat(char *dest, char *src);
void	free_and_reset(void *var);

#endif