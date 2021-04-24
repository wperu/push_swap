/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:29:21 by wperu             #+#    #+#             */
/*   Updated: 2021/04/23 17:58:06 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	small_find(t_stack *a)
{
	int	small;

	small = a->elem;
	while (a != NULL)
	{
		if (small >= a->elem)
			small = a->elem;
		a = a->next;
	}
	return (small);
}

int	big_find(t_stack *a)
{
	int	big;

	big = a->elem;
	while (a != NULL)
	{
		if (big <= a->elem)
			big = a->elem;
		a = a->next;
	}
	return (big);
}

int	ft_small_pos_b(t_stack *b, int small)
{
	int	pos;

	pos = 0;
	while (b)
	{
		if (b->elem == small)
			return (pos);
		b = b->next;
		pos++;
	}
	return (pos);
}

int	pos_small_find(t_stack *a, int pos, int small)
{
	int	i;

	i = -1;
	while (a)
	{
		i++;
		if (small == a->elem)
			pos = i++;
		a = a->next;
	}
	return (pos);
}
