/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:44:34 by wperu             #+#    #+#             */
/*   Updated: 2021/03/10 17:03:00 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void delstack(t_stack *stack)
{
    t_stack *tmp;

    tmp = stack;
    while(stack)
    {
        tmp = stack;
        stack = stack->next;
        free(tmp);
        tmp = NULL;
    }
}

void delcom(t_com *com)
{
    t_com *tmp;
    
    tmp = com;
    while(com)
    {
        tmp = com;
        com = com->next;
        free(tmp);
        tmp = NULL;
    }
}