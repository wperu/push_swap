/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:50:42 by wperu             #+#    #+#             */
/*   Updated: 2021/03/10 17:11:55 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUAH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <../libft/libft.h>

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

void			ft_push(t_stack *src, t_stack *dst);
void			ft_swap(t_stack *stack);
void			ft_rotate(t_stack *stack);
void			ft_reverse_rotate(t_stack *stack);
void			ft_management_rotate_rev(int pile, t_stack *a, t_stack *b);
void			ft_management_rotate(int pile, t_stack *a, t_stack *b);
void			ft_management_swap(int pile, t_stack *a, t_stack *b);
void			ft_management_push(int pile, t_stack *a, t_stack *b);
void			ft_get_stack(char **list, t_stack *a);
void			ft_start(t_stack *a, t_stack *b, unsigned int len);
int				ft_checker(t_stack *a, unsigned int len);
char			*ft_checkcom(char *str);
void			ft_getcom(t_com *com);
void			ft_com(char *str, t_com *com);
unsigned int	ft_getlen(char **str, int size, t_stack *a);
void 			delcom(t_com *com);
void			delstack(t_stack *stack);
int				ft_digitstr(char *str);
int				ft_get_int(char *str);
int         	ft_isnbr(char *str, t_stack *a);
t_stack 		*ft_nstack(int nbr, t_stack *stack);
int     		ft_pile(char *str);

#endif 