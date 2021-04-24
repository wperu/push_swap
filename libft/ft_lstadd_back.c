/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:05:09 by wperu             #+#    #+#             */
/*   Updated: 2021/04/24 16:40:52 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*list;

	if (alst == NULL)
		return ;
	list = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (list->next != NULL)
			list = list->next;
		list->next = new;
	}
}
