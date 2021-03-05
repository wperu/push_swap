/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: wperu <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 12:22:53 by wperu        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 18:06:58 by wperu       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *m;

	m = malloc(nmemb * size);
	if (m == 0)
		return (NULL);
	m = ft_memset(m, 0, nmemb * size);
	return ((void*)m);
}
