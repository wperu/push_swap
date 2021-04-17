/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:03:38 by wperu             #+#    #+#             */
/*   Updated: 2021/04/17 18:38:19 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_sort_tree(t_stack **a)
{
	int	top;
	int	mid;
	int	bot;
	int i;

	top = (*a)->elem;
	mid = (*a)->next->elem;
	bot = (*a)->next->next->elem;
	i = 0;
	if(top > mid && top < bot && mid < bot)
		i += ft_sa_print(a);
	if(top > mid && top > bot && mid > bot)
		i += ft_sa_rra_print(a);
	if(top > mid && top > bot && mid < bot)
		i += ft_ra_print(a);
	if(top < mid && top < bot && mid > bot)
		i += ft_sa_ra_print(a);
	if(top < mid && top > bot && mid > bot)
		i += ft_rra_print(a);
	if(ft_correct_order() == 1)
		return(i);
	return(0);

}

void ft_start(t_stack **a, t_stack **b, unsigned int len)
{
    t_com *com;

    com = NULL;
	if(len == 3)
		ft_sort_tree(a);
    printf("len = %d\n",len);
    //ft_display_stack(*a);
    ft_getcom(&com);

    ft_excute(com, a, b);
    if(ft_checker(*a, len) == 1)
        ft_putstr_fd("OK\n",1);
    else
        ft_putstr_fd("KO\n",1);
    delstack(a);
    delstack(b);
}

int main(int ac, char **av)
{
    t_stack	*a;
    t_stack	*b;

	a = NULL;
	b = NULL;
	if(ac > 1)
			ft_start_push(&a,&b,ft_getstack(av + 1, ac - 1, &a));
	return (0);
}
