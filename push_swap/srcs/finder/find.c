/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:29:21 by wperu             #+#    #+#             */
/*   Updated: 2021/04/19 17:36:24 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int small_find(t_stack *a)
{
	int small;

	small = a->elem;
	a = a->next;
	while(a)
	{
		if(small > a->elem)
			small = a->elem;
		a = a->next;
	}
	return(small);
}

int big_find(t_stack *a)
{
	int big;

	big = a->elem;
	a = a->next;
	while(a)
	{
		if(big < a->elem)
			big = a->elem;
		a = a->next;
	}
	return(big);
}