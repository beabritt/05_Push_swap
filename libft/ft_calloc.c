/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:01:01 by becamino          #+#    #+#             */
/*   Updated: 2023/09/25 16:41:15 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
