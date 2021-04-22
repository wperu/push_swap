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

int ft_push_start(t_stack **a, t_stack **b, int len)
{
	if (len == 5)
	{
		ft_push(a,b);
		ft_push(a,b);
		ft_putstr_fd("pb\n",1);
		ft_putstr_fd("pb\n",1);
		return(2);
	}
	else
	{
		ft_push(a,b);
		ft_putstr_fd("pb\n",1);
		return(1);
	}
}

int pos_test(t_stack *a, int small)
{
	int i;
	int pos;

	i= 0;
	pos = 0;
	while(a)
	{
		if(small == a->elem)
			pos = i;
		i++;
		a = a->next;
	}
	return(pos);
}


int ft_sort_five(t_stack **a, t_stack **b, int len)
{
	int i;
	int pos;
	int small;

	i = 0;
	small = 0;
	i += ft_push_start(a,b,len);
	i += ft_sort_tree(a);
	while(*b)
	{
		pos = 0;
		pos = ft_pos_a(a, b, pos);
		i += ft_range_top_a(a, pos);
	//	printf("i = %d\n",i);
		ft_push(b,a);
		ft_putstr_fd("pa\n",1);
		i++;
	}
	small = small_find(*a);
	pos = pos_test(*a,small);
	i += ft_range_top_a(a,pos);
	return(i);
}