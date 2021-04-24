/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:43:09 by wperu             #+#    #+#             */
/*   Updated: 2021/04/24 16:40:59 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*l;

	if (!lst)
		return ;
	while (*lst)
	{
		l = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = l;
	}
}
