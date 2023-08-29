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
int	ft_checkdupe(int argc, char **argv);



#endif