/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:50:42 by wperu             #+#    #+#             */
/*   Updated: 2021/03/05 16:08:14 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUAH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <libft/libft.h>

typedef struct          s_list
{
    int                 elem;
    struct s_list       *next;
}                       t_list;


void    ft_push(int *a, int *b);
void    ft_swap(int *stack);
void    ft_rotate(int *stack);
void    ft_reverse_rotate(int *stack);

#endif 