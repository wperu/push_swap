/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:14:49 by wperu             #+#    #+#             */
/*   Updated: 2021/04/23 16:10:15 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

int         ft_digitstr(char *str)
{
    int i;

    i = 0;
    if(str[i] == '-')
        i++;
    while(str[i])
    {
         if(ft_isdigit(str[i]) == 0)
         {
           ft_putstr_fd("Error\n",2);
            exit(1);  
         }
		 i++;
    }
	return(1);
}

int			ft_get_int(char *str)
{
	long nbr;
	
	nbr = ft_atol(str);
	if(nbr < INT_MIN)
	{
		ft_putstr_fd("Error\n",2);
        exit(1);
	}
	else if(nbr > INT_MAX)
	{
		ft_putstr_fd("Error\n",2);
        exit(1);
	}
	return((int)nbr);
}

int         ft_isnbr(char *str, t_stack *a)
{
    int nbr;

    nbr = 0;
    ft_digitstr(str);
    nbr = ft_get_int(str);
    while(a)
    {
        if(a->elem == nbr)
        {
            ft_putstr_fd("Error\n",2);
            exit(1);
        }
        a = a->next;
    }
    return(nbr);
}

t_stack *ft_nstack(int nbr, t_stack **stack)
{
	t_stack *tmp;
	t_stack *nstack;

	tmp = *stack;
	if(!(nstack= (t_stack *)malloc(sizeof(t_stack))))
		return(NULL);
	nstack->elem = nbr;
	nstack->next = NULL;
	if(*stack == NULL)
		*stack = nstack;
	else
	{
		while(tmp->next)
			tmp = tmp->next;
		tmp->next = nstack;
	}
	return(nstack);
}

unsigned int ft_getstack(char **str, int size, t_stack **a)
{
    int i;

    i = 0;
    if(size == 1)
        return(size);
    else
    {
        while(i < size)
        {
            if(!(ft_nstack(ft_isnbr(str[i],*a),a)))
            {
                ft_putstr_fd("Error\n",2);
                exit(1);
            }
            i++;
        }
    }
    return(size);
}