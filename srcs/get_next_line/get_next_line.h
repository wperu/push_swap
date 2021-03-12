/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:33:11 by wperu             #+#    #+#             */
/*   Updated: 2021/03/12 14:02:12 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

#define BUFFER_SIZE 32

int		get_next_line(int fd, char **line);
char	*ft_substr_g(char *s, unsigned int start, size_t len);
char	*ft_strjoin_g(char *s1, char *s2);
int		ft_checkerror(int fd, char **line, char **str);
char	*ft_strdup_g(char *s);
size_t	ft_strlen_g(char *str);
int		get_next_line_2(int ret, char **str, size_t i);

#endif
