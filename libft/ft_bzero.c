/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:02:48 by becamino          #+#    #+#             */
/*   Updated: 2023/01/29 21:02:53 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Escribe 0s en una string de bytes*/

void	ft_bzero(void *s, size_t n)
{
	if (n > 0)
		ft_memset(s, '\0', n);
}

/*int	main(void)
{
	char	s [];
	size_t	n;
	


	printf("%s \n", ft_bzero (s, n));
	return (0);
}*/
