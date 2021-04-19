/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:19:33 by wperu             #+#    #+#             */
/*   Updated: 2021/04/19 17:28:18 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_pos_a(t_stack **a, t_stack **b, int pos)
{
	int topb;
	t_stack *tmpa;

	topb = (*b)->elem;
	tmpa = (*a);
	if(*b)
    {
        if(topb > big_find(*a) || topb < small_find(*a))
            sort_big_or_small(b,a);
        else
        {
            while(tmpa)
            {
                pos++;
                if (tmpa->next != NULL)
                {
                    if(topb > tmpa->elem && topb < tmpa->next->elem)
                        return(pos);
                }
                tmpa = tmpa->next;
            }
        }
    }
    return (pos);
}

int ft_range_top_a(t_stack **a, int pos)
{
	int i;

	i = 0;
	if(pos == 1)
		i += ft_sa_print(a);
	if(pos == 2 && ft_lstsize((t_list *)(*a)) == 4)
	{
		i += ft_ra_print(a);
		i += ft_rra_print(a);
	}
	if((pos == 3  && ft_lstsize((t_list *)(*a)) == 4) || (pos == 2 && ft_lstsize((t_list *)(*a)) == 3))
	{
		i += ft_rra_print(a);
		i += ft_sa_print(a);
		i += ft_ra_print(a);
		i += ft_ra_print(a);
	}
	if((pos == 4 && ft_lstsize((t_list *)(*a)) == 4)|| (pos == 3 && ft_lstsize((t_list *)(*a)) == 3))
		i += ft_ra_print(a);
	return(i);
}
