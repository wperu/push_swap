/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:19:33 by wperu             #+#    #+#             */
/*   Updated: 2021/04/23 19:08:21 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ra_repeat(t_stack **a, int pos)
{
	int	i;

	i = pos;
	while (pos != 0)
	{
		ft_rotate(a);
		ft_putstr_fd("ra\n", 1);
		pos--;
	}
	return (i);
}

int	rra_repeat(t_stack **a, int pos)
{
	int	i;

	i = 0;
	pos = ft_lststack(*a) - pos;
	i = pos;
	while (pos != 0)
	{
		ft_reverse_rotate(a);
		ft_putstr_fd("rra\n", 1);
		pos--;
	}
	return (i);
}

int	sort_a_big_or_small(t_stack **a, t_stack **b)
{
	int	large;
	int	small;
	int	small_pos;
	int	i;

	i = 0;
	large = big_find(*b);
	small = small_find(*b);
	small_pos = ft_small_pos_b(*b, small);
	if ((*a)->elem < small || (*a)->elem > large)
		i += ft_range_top_a(b, small_pos);
	return (i);
}

int	ft_pos_a(t_stack **a, t_stack **b, int pos)
{
	int		topb;
	t_stack	*tmpa;

	topb = (*b)->elem;
	tmpa = (*a);
	if (*b)
	{
		if (topb > big_find(*a) || topb < small_find(*a))
			sort_a_big_or_small(b, a);
		else
		{
			while (tmpa)
			{
				pos++;
				if (tmpa->next != NULL)
				{
					if (topb > tmpa->elem && topb < tmpa->next->elem)
						return (pos);
				}
				tmpa = tmpa->next;
			}
		}
	}
	return (pos);
}

int	ft_range_top_a(t_stack **a, int pos)
{
	int	i;
	int	t;

	i = 0;
	t = ft_lststack(*a);
	if (pos < t / 2)
		i += ra_repeat(a, pos);
	if (pos >= t / 2)
		i += rra_repeat(a, pos);
	return (i);
}
