/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 15:37:37 by wperu             #+#    #+#             */
/*   Updated: 2021/04/23 17:47:51 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	pos_for_b(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;
	int		pos;

	i = 0;
	pos = 0;
	tmp = *b;
	if (a)
	{
		while (tmp)
		{
			pos++;
			if (tmp->next != NULL)
			{
				if ((*a)->elem > tmp->elem && (*a)->elem <tmp->next->elem)
					return (pos);
			}
			tmp = tmp->next;
		}
	}
	return (pos);
}

int	rb_repeat(t_stack **b, int pos)
{
	int	i;

	i = 0;
	while (pos != 0)
	{
		ft_rotate(b);
		ft_putstr_fd("rb\n", 1);
		pos--;
		i++;
	}
	return (i);
}

int	rrb_repeat(t_stack **b, int pos)
{
	int	i;

	i = 0;
	pos = ft_lststack(*b) - pos;
	i = pos;
	while (pos != 0)
	{
		ft_reverse_rotate(b);
		ft_putstr_fd("rrb\n", 1);
		pos--;
	}
	return (i);
}

int	ft_range_top_b(t_stack **b, int pos)
{
	int	i;
	int	t;

	i = 0;
	t = ft_lststack(*b);
	if (pos < t / 2)
		i += rb_repeat(b, pos);
	if (pos >= t / 2)
		i += rrb_repeat(b, pos);
	return (i);
}

int	ft_range(t_stack *a, int local_max)
{
	while (a)
	{
		if (a->elem <= local_max)
			return (1);
		a = a->next;
	}
	return (0);
}
