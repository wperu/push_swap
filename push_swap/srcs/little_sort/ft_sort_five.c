/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:02:23 by wperu             #+#    #+#             */
/*   Updated: 2021/04/19 17:28:44 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_push_start(t_stack **a, t_stack **b)
{
    ft_push(a,b);
    ft_push(a,b);
	ft_putstr_fd("pb\n",1);
	ft_putstr_fd("pb\n",1);
	return(2);
}


int ft_sort_five(t_stack **a, t_stack **b)
{
	int i;
	int pos;
	i = 0;

	i += ft_push_start(a,b);
	i += ft_sort_tree(a);
	while(*b)
	{
		pos = 0;
		pos = ft_pos_a(a, b, pos);
		printf("pos = %d\n",pos);
	//	i += ft_range_top_a(a, pos);
		ft_push(b,a);
		ft_putstr_fd("pa\n",1);
		i++;
	}
	return(i);
}