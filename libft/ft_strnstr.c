/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: wperu <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 18:39:25 by wperu        #+#   ##    ##    #+#       */
/*   Updated: 2019/11/12 13:25:23 by wperu       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	lenf;

	if (*to_find == '\0')
		return ((char*)str);
	i = 0;
	lenf = ft_strlen(to_find);
	while (str[i] != '\0' && len-- >= lenf)
	{
		if (str[i] == *to_find && ft_memcmp(str + i, to_find, lenf) == 0)
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
