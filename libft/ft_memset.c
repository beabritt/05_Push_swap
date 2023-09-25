/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:57:54 by becamino          #+#    #+#             */
/*   Updated: 2023/09/25 16:41:34 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// writes 'c' value x len in b string.

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
