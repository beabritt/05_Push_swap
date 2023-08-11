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

#include <stdio.h>
#include <stdlib.h>
#include "pruebaslib.h"

/*void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);*/

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

/*int main(void)
{
    size_t  n;
    size_t  size;
	void	*p;

	n = 2;
	size = 4;
	p = ft_calloc(n, size);
    printf("%lu \n", sizeof(p));
	free(p);
	return (0);
}*/