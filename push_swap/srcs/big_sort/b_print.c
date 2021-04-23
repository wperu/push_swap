/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 15:38:36 by wperu             #+#    #+#             */
/*   Updated: 2021/04/23 17:44:12 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	push_b_print(t_stack **a, t_stack **b)
{
	ft_push(a, b);
	ft_putstr_fd("pb\n", 1);
	return (1);
}

int	ft_b_empty_or_one(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	i += push_b_print(a, b);
	return (i);
}

int	rb_rrb_oho(t_stack **a, t_stack **b, int pos, int i)
{
	while (pos > 0)
	{
		ft_rotate(b);
		ft_putstr_fd("rb\n", 1);
		pos--;
		i++;
	}
	if (pos == 0)
	{
		ft_push(b, a);
		ft_putstr_fd("pa\n", 1);
		i++;
	}
	return (i);
}

int	rb_rrb_oh_two(t_stack **a, t_stack **b, int pos, int tot)
{
	int	i;
	int	big;

	i = 0;
	big = big_find(*b);
	while (tot > pos)
	{
		ft_reverse_rotate(b);
		ft_putstr_fd("rrb\n", 1);
		pos++;
		i++;
	}
	if ((*b)->elem == big)
	{
		ft_push(b, a);
		ft_putstr_fd("pa\n", 1);
	}
	return (i);
}
