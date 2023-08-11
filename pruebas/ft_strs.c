/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:51:23 by becamino          #+#    #+#             */
/*   Updated: 2023/01/27 13:51:26 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"

size_t	*ft_strchr(const char *s, int c)
{
	const int	slen = ft_strlen(s);
	int			x;

	x = 0;
	while (x <= slen)
	{
		if (s[x] == (char)c)
			return ((size_t *)1);
		else
			x++;
	}
	return (0);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize > 0)
	{
		i = 0;
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i ++;
		}
		dst [i] = '\0';
		return (ft_strlen(src));
	}
	else
		return (ft_strlen(src));
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
