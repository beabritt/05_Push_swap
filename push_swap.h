/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:07:47 by becamino          #+#    #+#             */
/*   Updated: 2023/07/28 20:10:42 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define 	PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



typedef struct s_stack
{
    int content;
    struct s_stack   *next;
}   t_stack;


#endif