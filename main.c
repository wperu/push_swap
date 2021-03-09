/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:51:31 by wperu             #+#    #+#             */
/*   Updated: 2021/03/09 15:30:49 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int ft_checker(t_stack *a, unsigned int len)
{
    int nbr;
    int lns;

    lns = 0;
    if(a = NULL)
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
        a = a->elem;
    }
    if(lns != len)
        return(0);
    return(1);
}

char *ft_checkcom(char *str)
{
    if(ft_strcmp(str,"sa") != 0 && 
    ft_strcmp(str,"sb") != 0 &&
    ft_strcmp(str,"ss") != 0 &&
    ft_strcmp(str,"pa") != 0 &&
    ft_strcmp(str,"pb") != 0 &&
    ft_strcmp(str,"ra") != 0 &&
    ft_strcmp(str,"rb") != 0 &&
    ft_strcmp(str,"rr") != 0 &&
    ft_strcmp(str,"rra") != 0 &&
    ft_strcmp(str,"rrb") != 0 &&
    ft_strcmp(str,"rrr") != 0)
    {
        ft_putstr_fd("Error\n", 2);
        exit(1);
    }
    return(str);
}

void getcom(t_com *com)
{
    char *str;

    str = NULL;
    while(get_next_line(0, &str) == 1)
    {   
        ft_com(ft_checkcom(str), com);
        ft_free(&str);
    }
}

void ft_start(t_stack *a, t_stack *b, unsigned int len)
{
    t_com *com;

    getcom(com);
    ft_exec(com, a, b);
    if(ft_checker(a, len) == 1)
        ft_putstr("OK\n");
    else
        ft_putstr("KO\n");
    delstack(a);
    delstack(b);
    delcom(com);
}

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;
    if(ac > 1)
        ft_start(a,b,ft_getlen(av + 1, ac - 1, a));
    return(0);
}

