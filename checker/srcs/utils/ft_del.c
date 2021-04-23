/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:44:34 by wperu             #+#    #+#             */
/*   Updated: 2021/04/23 16:10:35 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void delstack(t_stack **stack)
{
    t_stack *tmp;

    tmp = *stack;
    while(*stack)
    {
        tmp = *stack;
        *stack = (*stack)->next;
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

long    ft_atol(const char *str)
{
	int i;
	int  negative;
	long result;

	result = 0;
	negative = 1;
	i = 0;
	while (((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)) && str[i])
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			negative = -1;
		i++;
	}
	while ((str[i] >= 48 && str[i] <= 57) && str[i])
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
    
	return (negative * result);
}