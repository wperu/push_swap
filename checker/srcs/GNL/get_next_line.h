/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 01:34:43 by emenella          #+#    #+#             */
/*   Updated: 2021/04/24 16:38:30 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "../../libft/libft.h"
# define BUFFER_SIZE 10000

typedef struct s_gnl
{
	char			*content;
	struct s_gnl	*next;
	int				fd;
}					t_gnl;

int					get_next_line(int fd, char **line);
char				*ft_strjoin_free(char *s1, char *s2);
void				ft_gnladd_back(t_gnl **alst, int fd);
t_gnl				*ft_gnlnew(int fd);
t_gnl				*ft_gnlchr(int fd, t_gnl **alst);
t_gnl				*ft_gnlprec(t_gnl *lst);
int					ft_buffer_to_line(t_gnl *current,
						char **line, t_gnl **alst);
void				ft_gnlfree(t_gnl *lst, t_gnl **alst);
#endif
