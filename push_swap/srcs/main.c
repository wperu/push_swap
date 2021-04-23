/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:03:38 by wperu             #+#    #+#             */
/*   Updated: 2021/04/23 18:34:35 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_correct_order(t_stack *a)
{
	while (a)
	{
		if (a->next)
		{
			if (a->elem > a->next->elem)
				return (1);
		}
		a = a->next;
	}
	return (0);
}

int	ft_sort_two(t_stack **a)
{
	int	i;

	i = 0;
	if ((*a)->elem > (*a)->next->elem)
		i = ft_sa_print(a);
	if (ft_correct_order(*a) == 0)
		return (i);
	return (0);
}

int	ft_sort_tree(t_stack **a)
{
	int	top;
	int	mid;
	int	bot;
	int	i;

	top = (*a)->elem;
	mid = (*a)->next->elem;
	bot = (*a)->next->next->elem;
	i = 0;
	if (top > mid && top < bot && mid < bot)
		i += ft_sa_print(a);
	if (top > mid && top > bot && mid > bot)
		i += ft_sa_rra_print(a);
	if (top > mid && top > bot && mid < bot)
		i += ft_ra_print(a);
	if (top < mid && top < bot && mid > bot)
		i += ft_sa_ra_print(a);
	if (top < mid && top > bot && mid > bot)
		i += ft_rra_print(a);
	if (ft_correct_order(*a) == 0)
		return (i);
	return (0);
}

void	ft_start_push(t_stack **a, t_stack **b, unsigned int len)
{
	if (len == 2)
		ft_sort_two(a);
	else if (len == 3)
		ft_sort_tree(a);
	else if (len == 5 || len == 4)
		ft_sort_five(a, b, len);
	else if (len > 5 && len <= 201)
		med_stack(a, b, len);
	else if (len > 200)
		large_stack(a, b, len);
	delstack(a);
	delstack(b);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac > 1)
		ft_start_push(&a, &b, ft_getstack(av + 1, ac - 1, &a));
	return (0);
}
