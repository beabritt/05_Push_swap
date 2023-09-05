/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:52:07 by becamino          #+#    #+#             */
/*   Updated: 2023/09/05 12:52:46 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_slen(int argc, char **argv)
{
	int x;
	int	len;

	x = 1;
	len = 0;
	while (x < argc)
	{
		len += ft_strlen(argv[x]) + 1;
		x++;
	}
	return (len);
}

int	ft_arrlen(char **array)
{
	int	x;

	x = 0;
	while(array[x] != '\0')
	{
		x++;
	}
	return (x);
}
