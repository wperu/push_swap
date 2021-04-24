/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:03:59 by wperu             #+#    #+#             */
/*   Updated: 2021/04/24 16:50:32 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../../libft/libft.h"

typedef struct s_stack
{
	int				elem;
	struct s_stack	*next;
}					t_stack;

int				ft_lststack(t_stack *lst);
int				ft_sort_two(t_stack **a);
int				ft_sort_tree(t_stack **a);
int				ft_sort_five(t_stack **a, t_stack **b, int len);
int				med_stack(t_stack **a, t_stack**b, int len);
int				ft_range_top_a(t_stack **a, int pos);
int				ft_range_top_b(t_stack **b, int pos);
int				ft_pos_a(t_stack **a, t_stack **b, int pos);
int				pos_for_b(t_stack **a, t_stack **b);
int				ft_sa_print(t_stack **a);
int				ft_sa_rra_print(t_stack **a);
int				ft_ra_print(t_stack **a);
int				ft_sa_ra_print(t_stack **a);
int				ft_rra_print(t_stack **a);
void			ft_push(t_stack **src, t_stack **dst);
void			ft_swap(t_stack **stack);
void			ft_rotate(t_stack **stack);
void			ft_reverse_rotate(t_stack **stack);
void			ft_get_stack(char **list, t_stack **a);
void			ft_start(t_stack **a, t_stack **b, unsigned int len);
unsigned int	ft_getstack(char **str, int size, t_stack **a);
void			delstack(t_stack **stack);
int				ft_digitstr(char *str);
int				ft_get_int(char *str);
int				ft_isnbr(char *str, t_stack *a);
t_stack			*ft_nstack(int nbr, t_stack **stack);
int				ft_pile(char *str);
long			ft_atol(const char *str);
int				ft_correct_order(t_stack *a);
void			ft_start_push(t_stack **a, t_stack **b, unsigned int len);
int				ft_push_start(t_stack **a, t_stack **b, int len);
int				small_find(t_stack *a);
int				big_find(t_stack *a);
int				sort_a_big_or_small(t_stack **a, t_stack **b);
int				sort_b_big_or_small(t_stack **a, t_stack **b);
int				rra_repeat(t_stack **a, int pos);
int				ra_repeat(t_stack **a, int pos);
int				rb_repeat(t_stack **b, int pos);
int				rrb_repeat(t_stack **b, int pos);
int				ft_small_pos_b(t_stack *b, int small);
int				pos_test(t_stack *a, int small);
int				ft_range(t_stack *a, int local_max);
int				push_b_print(t_stack **a, t_stack **b);
int				ft_b_empty_or_one(t_stack **a, t_stack **b);
int				manager_b_oh(t_stack **a, t_stack **b, int tot);
int				rb_rrb_oho(t_stack **a, t_stack **b, int pos, int i);
int				rb_rrb_oh_two(t_stack **a, t_stack **b, int pos, int tot);
int				pos_small_find(t_stack *a, int pos, int small);
int				med_stack(t_stack **a, t_stack **b, int i);
int				a_hle_wh_rg(t_stack **a, t_stack **b, int range_pos, int chunk);
int				a_hle_wh_rg_lg(t_stack **a, t_stack **b, int rg_pos, int chunk);
int				large_stack(t_stack **a, t_stack **b, int i);
int				before_push_b(t_stack **a, t_stack **b);
int				ft_range_pos(t_stack *a, int local_max);
void			ft_display_stack(t_stack *stack);

#endif