/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:28:08 by becamino          #+#    #+#             */
/*   Updated: 2023/09/25 16:43:45 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);*/
// Reserves enough space and return a string appending s1 and s2.

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

/*char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	slen2;
	size_t	slen1;
	void	*s3;

	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	x = slen1 + slen2 + 1;
	s3 = malloc(x);
	if (!s3)
		return (0);
	ft_strlcpy (s3, s1, slen1 + 1);
	ft_strlcpy (&s3[slen1], s2, slen2 + 1);
	return (s3);
}*/