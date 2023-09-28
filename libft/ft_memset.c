/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:57:54 by becamino          #+#    #+#             */
/*   Updated: 2023/01/29 13:58:00 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Escribe len de valor c (convertidos a un unsigned char) a la cadena b
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

/*int	main(void)
{
	char	b [];
	int		c;
	size_t	len;

	b = "Hola Pedro";
	c = 33;
	len = 5;
	printf("%s \n", ft_memset(b, c, len));
	return (0);
}*/
