#ifndef GET_NEXTLINE_H
#define GET_NEXTLINE_H

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
char    *ft_strchr(const char *str, int c);
size_t  ft_strlen(const char *str);
char *get_next_line(int fd);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(const char *str);
char	*ft_strcat(char *dest, char *src);



#endif