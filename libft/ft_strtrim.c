/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:16:12 by wperu             #+#    #+#             */
/*   Updated: 2021/04/24 16:47:55 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_cstart(char const *s, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != set[j] && set[j] != '\0')
			j++;
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

static	size_t	ft_cend(char const *s, char const *set, size_t len)
{
	size_t	i;
	size_t	j;

	i = len;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != set[j] && set[j] != '\0')
			j++;
		if (set[j] == '\0')
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*str;

	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	start = ft_cstart(s1, set);
	if (start == len)
		return (str = ft_calloc(1, sizeof(char *)));
	end = ft_cend(s1, set, len - 1);
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (str == 0)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
