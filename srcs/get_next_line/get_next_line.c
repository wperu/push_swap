/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:33:59 by wperu             #+#    #+#             */
/*   Updated: 2021/03/12 16:19:28 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int		ft_chr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		get_next_line(int fd, char **line)
{
	static char	*str;
	size_t		i;
	char		buf[BUFFER_SIZE + 1];
	int			ret;
	char		*temp;

	if (ft_checkerror(fd, line, &str) == -1)
		return (-1);
	i = 0;
	ret = 0;
	while ((ft_chr(str, '\n') == 0) && (ret = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[ret] = '\0';
		temp = ft_strjoin_g(str, buf);
		free(str);
		str = temp;
	}
	if (ret < 0)
		return (-1);
	while (str[i] && str[i] != '\n')
		i++;
	*line = (i == 0) ? ft_strdup_g("") : ft_substr_g(str, 0, i);
	return (get_next_line_2(ret, &str, i));
}

size_t	ft_strlen_g(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		get_next_line_2(int ret, char **str, size_t i)
{
	char *tmp;

	if (ret == 0 && ft_chr(*str, '\n') == 0)
	{
		free(*str);
		*str = NULL;
		return (0);
	}
	else
	{
		tmp = *str;
		*str = ft_substr_g(tmp, i + 1, ft_strlen_g(*str) - i);
		free(tmp);
		tmp = NULL;
		return (1);
	}
}
