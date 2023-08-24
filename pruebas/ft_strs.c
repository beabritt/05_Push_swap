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

int	ft_atoi(const char *str)
{
	int	x;
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	x = 0;

	while ((str[x] == 32 || (str[x] >= 9 && str[x] <= 13)))
	{
		x++;
	}	
	if (str[x] == '-')
		sign *= -1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		num = num * 10 + (str[x] - '0');
		x++;
	}
	return (num * sign);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*subs;
	size_t		slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (len > slen)
		len = slen;
	if (start + len > slen)
		len = slen - start;
	if (start >= slen)
	{
		subs = (char *)malloc(1);
		if (!subs)
			return (0);
		*subs = 0;
		return (subs);
	}
	subs = (char *)malloc(len + 1);
	if (!subs)
		return (0);
	ft_strlcpy(subs, &s[start], len + 1);
	return (subs);
}

int	*ft_strchr(const char *s, int c)
{
	const int	slen = ft_strlen(s);
	int			x;

	x = 0;
	while (x <= slen)
	{
		if (s[x] == (char)c)
			return (-1);
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
