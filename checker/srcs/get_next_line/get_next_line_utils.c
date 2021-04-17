/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:33:49 by wperu             #+#    #+#             */
/*   Updated: 2021/03/12 13:54:34 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

int		ft_checkerror(int fd, char **line, char **str)
{
	if (fd == -1 || line == NULL || BUFFER_SIZE < 1)
		return (-1);
	if (!*str)
	{
		if (!(*str = malloc(sizeof(char*) * (1))))
			return (-1);
		*str[0] = '\0';
	}
	return (0);
}

char	*ft_strdup_g(char *s)
{
	size_t	i;
	size_t	len;
	char	*dest;
	char	*temp;

	i = 0;
	temp = (char *)s;
	len = ft_strlen_g(s);
	if (!(dest = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		dest[i] = temp[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_substr_g(char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (0);
	if (start > ft_strlen_g(s))
		return (ft_strdup_g(""));
	if (len > ft_strlen_g(s))
		len = ft_strlen_g(s);
	if (!(sub = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_strjoin_g(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	str = NULL;
	if (!(str = malloc(sizeof(char) * (ft_strlen_g(s1) + (ft_strlen_g(s2) + 1)))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
