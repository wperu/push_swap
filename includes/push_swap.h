/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:50:42 by wperu             #+#    #+#             */
/*   Updated: 2021/03/09 14:33:20 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUAH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <libft/libft.h>

typedef struct          s_stack
{
    int                 elem;
    struct s_stack       *next;
}                       t_stack;

typedef struct s_com
{
	enum
	{
		s,
		p,
		r,
		rr
	}	com;
	int pile;
	struct s_com *next;
}				t_com;

void    ft_push(t_stack *src, t_stack *dst);
void    ft_swap(t_stack *stack);
void    ft_rotate(t_stack *stack);
void    ft_reverse_rotate(t_stack *stack);
void    ft_management_rotate_rev(int pile, t_stack *a, t_stack *b);
void    ft_management_rotate(int pile, t_stack *a, t_stack *b);
void    ft_management_swap(int pile, t_stack *a, t_stack *b);
void	ft_management_push(int pile, t_stack *a, t_stack *b);


#endif 