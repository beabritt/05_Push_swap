/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:23:53 by becamino          #+#    #+#             */
/*   Updated: 2023/09/25 16:21:33 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

/*	Search for s2 in s1 for n bytes.*/
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

/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
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
		return ((char *)&haystack[x - y]);
	else
		return (0);
}*/
