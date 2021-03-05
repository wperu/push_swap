/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: wperu <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 17:56:17 by wperu        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 12:56:38 by wperu       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		srclen;
	char	*dest;

	i = 0;
	srclen = 0;
	while (s[srclen] != '\0')
		srclen++;
	dest = (char*)malloc(sizeof(*dest) * (srclen + 1));
	if (dest == 0)
		return (NULL);
	while (i < srclen)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
