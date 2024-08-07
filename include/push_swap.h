/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:07:47 by becamino          #+#    #+#             */
/*   Updated: 2024/08/07 17:56:39 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

enum e_exit_code
{
	ERROR = -1,
	NO_ERROR = 0	
};

enum e_ordered
{
	NOT_ORDERED,
	ORDERED
};

typedef struct s_list
{
	int				n;
	int				order;
	struct s_list	*next;
}	t_list;

//Main functions
char	**ft_toarray(int argc, char **argv);
char	*ft_toarray2(int argc, char **argv);
void	ft_tolist(t_list **stack_a, char **array);
void	ft_deliver(t_list **stack_a, t_list **stack_b);

//String and array functions
size_t	ft_wcounter(char const *s, char c);
int		ft_strchr_ps(const char *s, int c);
int		ft_strnstr_ps(const char *haystack, const char *needle, size_t len);
int		ft_slen(int argc, char **argv);
char	*ft_strjoin_ps(char const *s1, char const *s2);
int		ft_arrlen(char **array);

//Errors and free functions
void	ft_free_end(char **array);
void	freestacks(t_list **stack_a, t_list **stack_b);

//Check errors
int		ft_checkerror(int argc, char **argv);
int		ft_checknum(int argc, char **argv);
int		ft_checkmaxmin(int argc, char **argv);
int		ft_checkdupes(t_list **stack_a);
int		ft_checkorder(t_list **stack_a);
void	ft_error(void);
int		ft_onlyspaces(char **argv);

//Lists functions
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **stack_a, t_list *node);
int		ft_lstsize(t_list *lst);
void	ft_lstclear(t_list **lst);
void	ft_lstdelone(t_list *lst);
void	ft_createnode(t_list **stack_a, int n);
t_list	*ft_lstlast(t_list *lst);
//void	print_list(t_list **stack);

//Actions
void	ft_swap(t_list **stack);
void	ft_push(t_list **stack1, t_list **stack2);
void	ft_rotate(t_list **stack);
void	ft_revrotate(t_list **stack);

//Movements
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list	**stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

//Allgorithm.
int		ft_highestorder(t_list **stack);
void	ft_alg3(t_list **stack_a, int count);
void	ft_alg5(t_list **stack_a, t_list **stack_b, int counter);
int		ft_smallest_pos(t_list **stack);
int		ft_smallest_order(t_list **stack);
void	ft_pushfirst5(t_list **stack_a, t_list **stack_b);
void	ft_pushlast5(t_list **stack_a, t_list **stack_b);
void	ft_alg100(t_list **stack_a, t_list **stack_b, int counter);
void	ft_push_b(t_list **stack_a, t_list **stack_b, int stack_len,
			int big_order);
int		ft_highest_pos(t_list **stack);
void	ft_push_a(t_list **stack_a, t_list **stack_b, int highest_order);
void	ft_push_rev_a(t_list **stack_a, t_list **stack_b, int highest_order);
int		ft_counter_bign(t_list **stack_a, int bigger_order);
int		ft_2ndsmallest_order(t_list **stack, int first_smaller);
int		ft_compare(t_list **stack);
int		ft_find_pos(t_list **stack, int order);
int		ft_calculate_fastest(int f_pos, int s_pos, int counter);
void	ft_alg500(t_list **stack_a, t_list **stack_b, int counter);

#endif