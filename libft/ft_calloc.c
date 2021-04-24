/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:22:53 by wperu             #+#    #+#             */
/*   Updated: 2021/04/24 16:39:22 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*m;

	m = malloc(nmemb * size);
	if (m == 0)
		return (NULL);
	m = ft_memset(m, 0, nmemb * size);
	return ((void *)m);
}
