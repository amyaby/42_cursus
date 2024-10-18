/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 02:39:35 by iabasala          #+#    #+#             */
/*   Updated: 2024/10/12 11:01:24 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*char *free(char *leftover,char *temp)
{
    free(leftover);
        leftover = temp;
        return leftover;
}*/
char *read_and_concat(int fd, char *leftover)
{
    int read_bytes;
    char *buff;
    char *temp;
    
    buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if(!buff)
        return (NULL);
    read_bytes = 1;
    while((!leftover || !ft_strchr(leftover, '\n')) && read_bytes > 0)
    {
        read_bytes = read(fd, buff, BUFFER_SIZE);
        if(read_bytes == -1)
        {
            free(buff);
            free(leftover);
            return (NULL);
        }
        buff[read_bytes] = '\0';
        temp = ft_strjoin(leftover, buff);
        free(leftover);
        leftover = temp;
// leftover = free_and_return(leftover, temp);
        if (!leftover)
        {
            free(buff);
            return (NULL);
        }
    }
    free(buff);
    return (leftover);
}
char *extract_line(char *leftover) {
    int i = 0;
    char *str;
    
    if (!leftover || !leftover[i])
        return (NULL);
    
    while (leftover[i] && leftover[i] != '\n')
        i++;
    
    // Include the newline character if present
    if (leftover[i] == '\n')
        i++;
    
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str)
        return (NULL);
    
    ft_memcpy(str, leftover, i);
    str[i] = '\0';
    return str;
}
char *new_leftover(char *leftover) 
{
    int i = 0;
    char *str;
    
while (leftover[i] && leftover[i] != '\n')
        i++;

    if (leftover[i] == '\n')
        i++;

    if (!leftover[i])
    {
        free(leftover);
        return (NULL);
    }

    str = ft_strdup(leftover + i);
    free(leftover);
    return str;
}

int    main(void)
{
    int fd;
    char *line;

    fd = open("test.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return (1);
    }
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("line = %s\n", line);
        free(line);
    }
    close(fd);
    return (0);
}