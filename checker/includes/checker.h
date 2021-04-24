/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:44:59 by wperu             #+#    #+#             */
/*   Updated: 2021/04/24 17:17:46 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../../libft/libft.h"
# include "../srcs/GNL/get_next_line.h"

typedef struct s_stack
{
	int				elem;
	struct s_stack	*next;
}					t_stack;

typedef struct s_com
{
	enum
	{
		s,
		p,
		r,
		rr
	}				e_com;
	int				pile;
	struct s_com	*next;
}					t_com;

void			ft_push(t_stack **src, t_stack **dst);
void			ft_swap(t_stack **stack);
void			ft_rotate(t_stack **stack);
void			ft_reverse_rotate(t_stack **stack);
void			ft_management_rotate_rev(int pile, t_stack **a, t_stack **b);
void			ft_management_rotate(int pile, t_stack **a, t_stack **b);
void			ft_management_swap(int pile, t_stack **a, t_stack **b);
void			ft_management_push(int pile, t_stack **a, t_stack **b);
void			ft_get_stack(char **list, t_stack **a);
void			ft_start(t_stack **a, t_stack **b, unsigned int len);
int				ft_checker(t_stack *a, int len);
char			*ft_checkcom(char *str);
void			ft_getcom(t_com **com);
t_com			*ft_com(char *str, t_com **com);
unsigned int	ft_getstack(char **str, int size, t_stack **a);
void			delcom(t_com *com);
void			delstack(t_stack **stack);
int				ft_digitstr(char *str);
int				ft_get_int(char *str);
int				ft_isnbr(char *str, t_stack *a);
t_stack			*ft_nstack(int nbr, t_stack **stack);
int				ft_pile(char *str);
void			ft_excute(t_com *com, t_stack **a, t_stack **b);
long			ft_atol(const char *str);
void			ft_save_cmd(char *str, t_com *ncom);
void			ft_display_stack(t_stack *stack);
#endif 