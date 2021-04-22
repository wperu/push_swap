/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:38:47 by wperu             #+#    #+#             */
/*   Updated: 2021/04/22 16:57:37 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


int ft_sa_print(t_stack **a)
{
		ft_swap(a);
		ft_putstr_fd("sa\n",1);
		return (1);
}

int ft_sa_rra_print(t_stack **a)
{
	ft_swap(a);
	ft_reverse_rotate(a);
	ft_putstr_fd("sa\n",1);
	ft_putstr_fd("rra\n",1);
	return (2);
}

int ft_ra_print(t_stack **a)
{
	ft_rotate(a);
	ft_putstr_fd("ra\n",1);
	return (1);
}

int ft_sa_ra_print(t_stack **a)
{
	ft_swap(a);
	ft_rotate(a);
	ft_putstr_fd("sa\n",1);
	ft_putstr_fd("ra\n",1);
	return (2);
}

int ft_rra_print(t_stack **a)
{
	ft_reverse_rotate(a);
	ft_putstr_fd("rra\n",1);
	return(1);
}