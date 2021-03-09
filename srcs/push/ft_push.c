/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:47:08 by wperu             #+#    #+#             */
/*   Updated: 2021/03/09 13:46:22 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void ft_push(t_stack *src, t_stack *dst)
{
    t_stack *tmp;

    tmp = src;
    src = src->next;
    tmp->next = dst;
    dst = tmp;
}

void    ft_push_management(int pile, t_stack *a, t_stack *b)
{
    if(pile == 1 && a != NULL)
        ft_push(a,b);
    if(pile == 2 && b != NULL)
        ft_push(b,a);
}