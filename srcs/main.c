/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:51:31 by wperu             #+#    #+#             */
/*   Updated: 2021/03/12 16:39:01 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_excute(t_com *com, t_stack *a, t_stack *b)
{
	while(com)
	{
		if(com->com == s)
			ft_management_swap(com->pile,a,b);
		if(com->com == p)
			ft_management_push(com->pile,a,b);
		if(com->com == r)
			ft_management_rotate(com->pile,a,b);
		if(com->com == rr)
			ft_management_rotate_rev(com->pile,a,b);
		com = com->next;
	}
}



int ft_checker(t_stack *a, unsigned int len)
{
    int nbr;
    unsigned int lns;

    lns = 0;
    if(a == NULL)
        return(0);
    nbr = a->elem;
    a = a->next;
    lns++;
    while(a)
    {
        if(nbr > a->elem)
            return (0);
        nbr = a->elem;
        lns++;
        a = a->next;
    }
    if(lns != len)
        return(0);
    return(1);
}

void ft_start(t_stack *a, t_stack *b, unsigned int len)
{
    t_com *com;

    com = NULL;
    if(ft_getcom(com) == 1)
    {
        ft_excute(com, a, b);
        if(ft_checker(a, len) == 1)
            ft_putstr_fd("OK\n",1);
        else
            ft_putstr_fd("KO\n",1);
        delstack(a);
        delstack(b);
        delcom(com);
    }
}

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;
    if(ac > 1)
        ft_start(a,b,ft_getstack(av + 1, ac - 1, a));
    return(0);
}