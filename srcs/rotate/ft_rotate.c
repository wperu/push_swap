/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:47:10 by wperu             #+#    #+#             */
/*   Updated: 2021/03/05 15:48:24 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


void ft_rotate(t_stack *stack)
{
    t_stack *stack;
    
    tmp = stack;
    while (tmp->next)
        tmp= tmp->next;
    tmp->next = stack;
    tmp = stack;
    stack = stack->next;
    tmp->next = NULL;

}

void ft_reverse_rotate(int *stack)
{
    t_stack *tmp;
    t_stack *tmp2;

    tmp = stack;
    tmp2 = stack;
    while(tmp->next)
        tmp = tmp->next;
    while(tmp2->next)
        tmp2 = tmp2->next;
    tmp->next = stack;
    stack = tmp;
    tmp2->next = NULL;
    
}

void ft_managament_rotate(int pile, t_stack *a, t_stack *b)
{
    if(pile == 1 || pile == 0) && a && a->next)
        ft_rotate(a);
    if(pile == 2 || pile == 0) && b && b->next)
        ft_rotate(b);
}