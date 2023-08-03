/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:26:52 by becamino          #+#    #+#             */
/*   Updated: 2023/07/25 12:26:54 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Send str string to a specified file descrittor*/

void	ft_putstr_fd(char *s, int fd)
{
	size_t	slen;

	slen = ft_strlen(s);
	write(fd, s, slen);
}

/*int	main(void)
{
	char	str[] = "hace buen dia";

	ft_putstr_fd(str, 1);
	return (0);
}*/
