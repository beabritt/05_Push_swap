/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_mod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:54:47 by becamino          #+#    #+#             */
/*   Updated: 2024/08/19 19:54:49 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	ft_atol(char *str)
{
	int		i;
	int		neg;
	long	result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		neg = neg * (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	result = result * neg;
	return (result);
}

char	*ft_strjoin_ps(char const *s1, char const *s2)
{
	size_t	x;
	size_t	slen2;
	size_t	slen1;
	char	*s3;

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

int	ft_strnstr_ps(const char *haystack, const char *needle, size_t len)
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

int	ft_strchr_ps(const char *s, int c)
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
