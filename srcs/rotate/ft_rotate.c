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


void ft_rotate(int *stack)
{
    int i;
    int len;
    int last;

    i = 0;
    len = 0;
    last = stack[0];
    while(stack[len])
        len++;
    while(i<len-1)
    {
        stack[i]= stack[i+1];
        i++;
    }
    stack[i] = last;
}

void ft_reverse_rotate(int *stack)
{
    int i;
    int len;
    int first;

    i = 0;
    len = 0;
    first = 0;
    while(stack[len])
        len++;
    first = stack[len - 1];
    while(len > i)
    {
        len--;
        stack[len] = stack[len - 1];
    }
    stack[0] = first;
}