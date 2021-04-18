/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:47:12 by wperu             #+#    #+#             */
/*   Updated: 2021/04/18 17:27:37 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void ft_swap(t_stack **stack)
{
    t_stack *tmp;

    tmp = *stack;
    *stack = (*stack)->next;
    tmp->next = (*stack)->next;
    (*stack)->next = tmp;
}

void    ft_management_swap(int pile, t_stack **a, t_stack **b)
{
    if((pile == 1 || pile == 0) && *a && (*a)->next)
        ft_swap(a);
    if((pile == 2 || pile == 0) && *b && (*b)->next)
        ft_swap(b);

}