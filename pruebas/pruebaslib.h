/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebaslib.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:53:55 by becamino          #+#    #+#             */
/*   Updated: 2023/09/05 13:02:43 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRUEBASLIB_H
# define PRUEBASLIB_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
    int content;
    struct s_list   *next;
}   t_list;


char	**ft_split(char const *s, char c);
void	*ft_free(char **arr, size_t a);
size_t	ft_wcounter(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_calloc(size_t n, size_t size);
int	    ft_strchr(const char *s, int c);
int	    ft_atoi(const char *str);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int	    ft_checkerror(int argc, char **argv);
int	    ft_checknum(int argc, char **argv);
int	    ft_checkmaxmin(int argc, char **argv);
int     ft_checkdupe(int argc, char **argv);
int	    ft_strnstr(const char *haystack, const char *needle, size_t len);
char	**ft_toarray(int argc, char **argv);
char	*ft_toarray2(int argc, char **argv);
int	    ft_slen(int argc, char **argv);
char	*ft_strjoin_ps(char const *s1, char const *s2);
int	    ft_arrlen(char **array);
void	ft_werror(char  **array);
void    ft_free_end(char **array);




#endif