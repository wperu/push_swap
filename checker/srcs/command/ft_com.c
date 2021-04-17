/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_com.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:40:35 by wperu             #+#    #+#             */
/*   Updated: 2021/04/17 17:20:35 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int     ft_pile(char *str)
{
    int     i;
    char    c;

    i = 0;
    while(str[i])
    {
        if(str[i+1] == '\0')
            c = str[i];
        i++;
    }
    if(c == 'a')
        return(1);
    else if(c == 'b')
        return(2);
    else
        return(0);
}

t_com *ft_com(char *str, t_com **com)
{
    t_com *tmp;
    t_com *ncom;

    tmp = *com;
    if(!(ncom = (t_com*)malloc(sizeof(t_com))))
        return (NULL);
    if(ft_strnstr("sa sb ss",str,9))
        ncom->com = s;
    if(ft_strnstr("pa pb",str,5))
        ncom->com = p;
    if(ft_strnstr("ra rb rr",str,9))
        ncom->com = r;
    if(ft_strnstr("rra rrb rrr",str,12) && ncom->com != r )
        ncom->com = rr;
    ncom->pile = ft_pile(str);
    ncom->next = NULL;
    if(*com == NULL)
        *com = ncom;
    else
    {
        while (tmp->next)
            tmp = tmp->next;
        tmp->next=ncom;
    }
    return(ncom);
}

char *ft_checkcom(char *str)
{
    if(strcmp(str,"sa") != 0 && 
    strcmp(str,"sb") != 0 &&
    strcmp(str,"ss") != 0 &&
    strcmp(str,"pa") != 0 &&
    strcmp(str,"pb") != 0 &&
    strcmp(str,"ra") != 0 &&
    strcmp(str,"rb") != 0 &&
    strcmp(str,"rr") != 0 &&
    strcmp(str,"rra") != 0 &&
    strcmp(str,"rrb") != 0 &&
    strcmp(str,"rrr") != 0)
    {
        ft_putstr_fd("Error\n", 2);
        exit(1);
    }
    return(str);
}

void ft_getcom(t_com **com)
{
    char *str;

    str = NULL;
    while(get_next_line(0, &str) == 1)
    {   
        ft_com(ft_checkcom(str), com);
        free(str);
        str = NULL;
    }
}