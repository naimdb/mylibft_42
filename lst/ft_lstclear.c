/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadel-be <nadel-be@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:20:19 by nadel-be          #+#    #+#             */
/*   Updated: 2022/10/21 15:23:32 by nadel-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lsttmp;

	while (*lst)
	{
		lsttmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lsttmp;
	}
	*lst = NULL;
}
