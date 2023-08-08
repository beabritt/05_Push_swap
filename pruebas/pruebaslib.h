#ifndef PRUEBASLIB_H
# define PRUEBASLIB_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_calloc(size_t n, size_t size);


#endif