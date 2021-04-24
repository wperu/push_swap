/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_com.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:40:35 by wperu             #+#    #+#             */
/*   Updated: 2021/04/24 17:20:18 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

int	ft_pile(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		if (str[i + 1] == '\0')
			c = str[i];
		i++;
	}
	if (c == 'a')
		return (1);
	else if (c == 'b')
		return (2);
	else
		return (0);
}

void	ft_save_cmd(char *str, t_com *ncom)
{
	if (ft_strnstr("sa sb ss", str, 9))
		ncom->e_com = s;
	if (ft_strnstr("pa pb", str, 5))
		ncom->e_com = p;
	if (ft_strnstr("ra rb rr", str, 9))
		ncom->e_com = r;
	if (ft_strnstr("rra rrb rrr", str, 12) && ncom->e_com != r)
		ncom->e_com = rr;
}

t_com	*ft_com(char *str, t_com **com)
{
	t_com	*tmp;
	t_com	*ncom;

	tmp = *com;
	ncom = (t_com *)malloc(sizeof(t_com));
	if (!(ncom))
		return (NULL);
	ft_save_cmd(str, ncom);
	ncom->pile = ft_pile(str);
	ncom->next = NULL;
	if (*com == NULL)
		*com = ncom;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ncom;
	}
	return (ncom);
}

char	*ft_checkcom(char *str)
{
	if (ft_strncmp(str, "sa", 2) != 0
		&& ft_strncmp(str, "sb", 2) != 0
		&& ft_strncmp(str, "ss", 2) != 0
		&& ft_strncmp(str, "pa", 2) != 0
		&& ft_strncmp(str, "pb", 2) != 0
		&& ft_strncmp(str, "ra", 2) != 0
		&& ft_strncmp(str, "rb", 2) != 0
		&& ft_strncmp(str, "rr", 2) != 0
		&& ft_strncmp(str, "rra", 3) != 0
		&& ft_strncmp(str, "rrb", 3) != 0
		&& ft_strncmp(str, "rrr", 3) != 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	return (str);
}

void	ft_getcom(t_com **com)
{
	char	*str;

	str = NULL;
	while (get_next_line(0, &str) == 1)
	{
		ft_com(ft_checkcom(str), com);
		free(str);
		str = NULL;
	}
}
