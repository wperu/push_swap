/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 21:58:16 by wperu             #+#    #+#             */
/*   Updated: 2021/04/24 16:44:48 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_word(char const *s, char c)
{
	int	cword;
	int	i;

	i = 0;
	cword = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			cword++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (cword);
}

static	int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[size + i])
		size++;
	return (size);
}

static	void	ft_freeall(char **split, int index)
{
	int	i;

	i = 0;
	while (i <= index)
	{
		free(split[i]);
		i++;
	}
}

static	char	**ft_s_split(char **split, char const *s, char c, int i)
{
	int	index;
	int	j;

	index = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			j = ft_size_word(s, c, i);
			split[index] = malloc(sizeof(char) * (j + 1));
			if (!(split[index]))
			{
				ft_freeall(split, index);
				return (NULL);
			}
			j = 0;
			while (s[i] && s[i] != c)
				split[index][j++] = s[i++];
			split[index++][j] = '\0';
		}
	}
	split[index] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	split = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!(split))
		return (NULL);
	split = ft_s_split(split, s, c, i);
	if (!(split))
	{
		free(split);
		return (0);
	}
	return (split);
}
