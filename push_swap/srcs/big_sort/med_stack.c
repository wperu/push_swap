/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   med_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 15:33:30 by wperu             #+#    #+#             */
/*   Updated: 2021/04/22 17:43:43 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/push_swap.h"

int ft_range_pos(t_stack *a, int local_max)
{
	int i;

	i = -1;
	while(a)
	{
		i++;
		if(a->elem <= local_max)
			return(i);
		a = a->next;
	}
	return(i);
}


int before_push_b(t_stack **a, t_stack **b)
{
    int pos;
    int i;

    i = 0;
    pos = pos_for_b(a, b);
    i += ft_range_top_b(b, pos);
    i += push_b_print(a, b);
    return (i);
}


int     sort_b_big_or_small(t_stack **a,t_stack **b)
{
    int large;
    int small;
    int small_pos;
	int i;

	i = 0;
	large = big_find(*b);
	small = small_find(*b);
	small_pos = ft_small_pos_b(*b,small);
	if((*a)->elem < small || (*a)->elem > large)
		i +=ft_range_top_a(b, small_pos);
        i += push_b_print(a,b);
	return (i);
}

int a_handle_while_range(t_stack **a,t_stack **b,int range_pos, int chunk)
{
    int tot;
    int max;
    int i;
    int pos;

    tot = ft_lststack(*a);
    max = tot/5;
    i = 0;
    pos = 0;
    while(ft_range(*a,chunk) == 1)
    {
        range_pos = ft_range_pos(*a,max);
        if((*a) && !((*a)->elem <= chunk))
            i += ft_range_top_a(a,range_pos);
        if((*a) && (*a)->elem <= chunk)
        {
            if(ft_lststack(*b) == 1 || (!*b))
                i += ft_b_empty_or_one(a,b); 
        }
        if(ft_lststack(*b) > 1 && (*a) && (*a)->elem <= chunk)
            i += sort_b_big_or_small(a,b);
        if((ft_lststack(*a)> 1 && (*a) && (*a)->elem <= chunk))
            i += before_push_b(a,b);
    }
    return(i);
}


int med_stack(t_stack **a, t_stack **b ,int i)
{
    int local_max;
    int tot;
    int j;
    int nb_div_chunk;
    int pos;
    
    j = 0;
    tot = ft_lststack(*a);
    while(*a)
    {
        j++;
        local_max = tot / 5;
        nb_div_chunk = local_max * j;
        pos = ft_range_pos(*a, local_max);
        if(ft_range(*a, nb_div_chunk) == 1)
            i += a_handle_while_range(a,b, pos, nb_div_chunk);
    }
    if (!*a)
        i += manager_b_oh(a,b,tot);
    return(i);
}

int manager_b_oh(t_stack **a, t_stack **b, int tot)
{
    int i;
    int half;
    int pos;
    int biggest;

    i = 0;
    while(*b)
    {
        tot = ft_lststack(*b);
        half = tot / 2;
        pos = 0;
        biggest = big_find(*b);
        pos = pos_small_find(*b, pos, biggest);
        if(pos <= half)
            i += rb_rrb_oho(a,b,pos,i);
        if(pos > half)
            i += rb_rrb_oh_two(a, b, pos, tot);
       // printf("b->elem = %d\n",(*b)->elem);
    }
    return(i);
}