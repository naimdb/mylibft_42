/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:18:00 by nadel-be          #+#    #+#             */
/*   Updated: 2022/11/30 12:56:46 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*cut_stock(char *stock)
{
	int		i;
	char	*res;

	i = 0;
	if (!stock[i])
		return (NULL);
	while (stock[i] && stock[i] != '\n')
		i++;
	res = ft_calloc(sizeof(*res), i + 2);
	if (res == 0)
		return (NULL);
	i = 0;
	while (stock[i] && stock[i] != '\n')
	{
		res[i] = stock[i];
		i++;
	}
	if (stock[i] == '\n')
		res[i] = stock[i];
	return (res);
}

void	*new_stock(char *stock)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	while (stock[i] && stock[i] != '\n')
		i++;
	if (stock[i] == '\0')
	{
		free(stock);
		return (NULL);
	}
	i++;
	res = ft_calloc(sizeof(*res), ft_strlen(stock) - i + 1);
	if (res == 0)
		return (NULL);
	while (stock[i])
		res[j++] = stock[i++];
	free_and_reset(stock);
	return (res);
}

char	*read_to_buf_to_stock(int fd, char *stock)
{
	char		buf[BUFFER_SIZE + 1];
	ssize_t		value;

	value = 1;
	while (value != 0 && !ft_strchr_gnl(stock, '\n'))
	{
		value = read(fd, buf, BUFFER_SIZE);
		if (value == -1)
		{
			free(stock);
			return (NULL);
		}
		buf[value] = '\0';
		stock = ft_strjoin_gnl(stock, buf);
	}
	return (stock);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stock[4096];

	if (fd < 0 && fd <= 4096 || BUFFER_SIZE <= 0)
		return (NULL);
	stock[fd] = read_to_buf_to_stock(fd, stock[fd]);
	if (!stock[fd])
		return (NULL);
	line = cut_stock(stock[fd]);
	stock[fd] = new_stock(stock[fd]);
	return (line);
}

void	free_and_reset(void *var)
{
	free(var);
	var = NULL;
}
