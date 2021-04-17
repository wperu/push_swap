/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:47:10 by wperu             #+#    #+#             */
/*   Updated: 2021/04/17 17:27:42 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rotate(t_stack **stack)
{
	t_stack *tmp;

	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
}

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack;
	tmp2 = *stack;
	while (tmp->next)
		tmp = tmp->next;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp->next = *stack;
	*stack = tmp;
	tmp2->next = NULL;
}

void	ft_management_rotate(int pile, t_stack **a, t_stack **b)
{
	if((pile == 1 || pile == 0) && *a && (*a)->next)
		ft_rotate(a);
	if((pile == 2 || pile == 0) && *b && (*b)->next)
		ft_rotate(b);
}

void	ft_management_rotate_rev(int pile, t_stack **a, t_stack **b)
{
	if((pile == 1 || pile == 0) && *a && (*a)->next)
		ft_reverse_rotate(a);
	if((pile == 2 || pile == 0) && *b && (*b)->next)
		ft_reverse_rotate(b);
}