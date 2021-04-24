/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:51:46 by wperu             #+#    #+#             */
/*   Updated: 2021/04/23 18:27:53 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	a_hle_wh_rg_lg(t_stack **a, t_stack **b, int rg_pos, int chunk)
{
	int	tot;
	int	max;
	int	i;
	int	pos;

	tot = ft_lststack(*a);
	max = tot / 11;
	i = 0;
	pos = 0;
	while (ft_range(*a, chunk) == 1)
	{
		rg_pos = ft_range_pos(*a, max);
		if ((*a) && !((*a)->elem <= chunk))
			i += ft_range_top_a(a, rg_pos);
		if ((*a) && (*a)->elem <= chunk)
		{
			if (ft_lststack(*b) == 1 || (!*b))
				i += ft_b_empty_or_one(a, b);
		}
		if (ft_lststack(*b) > 1 && (*a) && (*a)->elem <= chunk)
			i += sort_b_big_or_small(a, b);
		if ((ft_lststack(*a) > 1 && (*a) && (*a)->elem <= chunk))
			i += before_push_b(a, b);
	}
	return (i);
}

int	large_stack(t_stack **a, t_stack **b, int i)
{
	int	local_max;
	int	tot;
	int	j;
	int	nb_div_chunk;
	int	pos;

	j = 0;
	tot = ft_lststack(*a);
	while (*a)
	{
		j++;
		local_max = tot / 11;
		nb_div_chunk = local_max * j;
		pos = ft_range_pos(*a, local_max);
		if (ft_range(*a, nb_div_chunk) == 1)
			i += a_hle_wh_rg_lg(a, b, pos, nb_div_chunk);
	}
	if (!*a)
		i += manager_b_oh(a, b, tot);
	return (i);
}

int	before_push_b(t_stack **a, t_stack **b)
{
	int	pos;
	int	i;

	i = 0;
	pos = pos_for_b(a, b);
	i += ft_range_top_b(b, pos);
	i += push_b_print(a, b);
	return (i);
}
