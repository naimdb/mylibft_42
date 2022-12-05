/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:07:12 by nadel-be          #+#    #+#             */
/*   Updated: 2022/12/05 15:09:15 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

//	get_next_line
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char		*get_next_line(int fd);
char		*ft_strchr_gnl(const char *str, int c);
char		*ft_strjoin_gnl(char const *s1, char const *s2);
void		free_and_reset(void *var);

//	integer
size_t		ft_intlen(unsigned long long int nb);
size_t		ft_intlen_base(unsigned long long int nb, char *base);

// is ?
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);

//	linked list
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);
void		ft_lstadd_front(t_list **lst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(
				t_list *lst, void *(*f)(void *), void (*del)(void *));

// mem
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);

//	ft_printf
# ifndef CONVERT_STR
#  define CONVERT_STR "cspdiuxX%"
# endif

int			ft_convert_cent(va_list args);
int			ft_convert_char(va_list args);
int			ft_convert_str(va_list args);
int			ft_convert_ptr(va_list args);
int			ft_convert_int(va_list args);
int			ft_convert_hexa_lower(va_list args);
int			ft_convert_hexa_upper(va_list args);
int			ft_convert_uint(va_list args);
int			ft_printf(const char *fmt, ...);
int			ft_parse(char c, va_list args);

// put
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(unsigned long long nb, int fd);
void		ft_putnbr_base_fd(unsigned long long nbr, char *base, int fd);
void		ft_putstr_fd(char *str, int fd);

// str
char		**ft_split(char const *s, char c);
char		*ft_strcat(char *dest, char *src);
char		*ft_strchr(const char *str, int c);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strdup(char *src);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dest, char *src, unsigned int size);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
int			ft_strlen(const char *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *str, const char *needle, size_t n);
char		*ft_strrchr(const char *str, int c);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);

// transforme
int			ft_atoi(const char *str);
char		*ft_itoa(int n);
int			ft_tolower(int c);
int			ft_toupper(int c);

void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);

#endif