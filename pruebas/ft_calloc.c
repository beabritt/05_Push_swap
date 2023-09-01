/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:01:01 by becamino          #+#    #+#             */
/*   Updated: 2023/08/03 15:28:39 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pruebaslib.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	x;
	unsigned int	i;
	char			*d;

	d = (char *)b;
	x = c;
	i = 0;
	while (i < len)
	{
		d[i] = x;
		i++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	if (n > 0)
		ft_memset(s, '\0', n);
}

void	*ft_calloc(size_t n, size_t size)
{
	size_t	x;
	void	*p;

	x = n * size;
	if (x < n)
		return (NULL);
	p = malloc(x);
	if (!p)
		return (NULL);
	ft_bzero(p, x);
	return (p);
}
char	*ft_strjoin_ps(char const *s1, char const *s2)
{
	size_t	x;
	size_t	slen2;
	size_t	slen1;
	void	*s3;

	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	x = slen1 + slen2 + 2;
	s3 = malloc(x);
	if (!s3)
		return (0);
	ft_strlcpy (s3, s1, slen1 + 1);
	ft_strlcpy (&s3[slen1], s2, slen2 + 1);
	ft_strlcpy (&s3[x - 2], " ", 2);
	return (s3);
}
int	ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (needle[0] == '\0')
		return (0);
	while (x < len && haystack[x] != '\0' && needle[y] != '\0')
	{
		while (x < len && haystack[x] != needle[y]
			&& haystack[x] != '\0')
			x++;
		while (x < len && haystack[x] == needle[y]
			&& needle[y] != '\0')
		{	
			x++;
			y++;
		}
	}
	if (haystack[x - y] == needle[0] && needle[y] == '\0')
		return (-1);
	else
		return (0);
}
