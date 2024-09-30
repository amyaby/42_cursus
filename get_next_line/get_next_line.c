/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 02:39:35 by iabasala          #+#    #+#             */
/*   Updated: 2024/09/28 02:39:35 by iabasala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *alloc_buffer()
{
    char *buff;
    buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if(buff == NULL)
        return NULL;
    return buff;
}
int read_data(int fd, char *buff)
{
    int read_bytes;
    read_bytes = read(fd, buff, BUFFER_SIZE);
    if(read_bytes == -1)
        return -1;
    buff[read_bytes] = '\0';
    return read_bytes;
}
char *handle_leftover(char *buff, char *leftover)
{
    int leftover_len;
    leftover_len = ft_strlen(leftover);
    int buffer_len;
    buffer_len = ft_strlen(buff);
    char *new_leftover;
    if(leftover == NULL)
    {
        leftover = ft_strdup(buff);
        if (leftover == NULL)
        return NULL;
    }
    new_leftover = malloc(leftover_len + buffer_len + 1);
    if (new_leftover == NULL)
        return NULL;
    ft_strcpy(new_leftover , leftover);
    ft_strcat(new_leftover, buff);
    free(leftover);
    return new_leftover;
}
int extract_line(char *new_leftover)
{
    char *new_line_pos = ft_strchr(new_leftover, '\n');
    int line_length;
    char *line;
    if(new_line_pos)
    {
        line_length = new_line_pos - new_leftover + 1;

        line = malloc(sizeof(char) * (line_length + 1));
        if(!line)
            return NULL;
        ft_strncpy(line, new_leftover, line_length);
        line[line_length] = '\0';
        char *updated_leftover = ft_strdup(new_line_pos + 1);
        if(!updated_leftover)
        {
            free(line);
            return NULL;
        }
        free(new_leftover);
        new_leftover = updated_leftover;
    }
    else
    {
        line = ft_strdup(new_leftover);
        free(new_leftover);
        new_leftover = NULL;
    }
    return line;
}
char *get_next_line(int fd)
{
    static char	*bytes;
    char *line;
    char *buffer;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
    buffer = alloc_buffer();
    if (!buffer)
        return (NULL);
        bytes = read_data(fd, buffer);
        if (bytes == -1)
        {
            free(buffer);
		    return (NULL);
        }
        bytes = handle_leftover(buffer, bytes);
        free(buffer);
        if(!bytes)
            return (NULL);
        line = extract_line(bytes);
        if(!line)
            return NULL;
        return line;
        line = extract_line(bytes);
    free(buffer);
    
    if (!line)
        return (NULL);

    return line;
}
int main()
{
    int fd;
    char *line;
    int i = 1;
    
    fd = open("file", O_RDONLY);
    while (i > 0)
    {
        i = get_next_line(fd);
        printf("line = %s\n", line);
    }
    close(fd);
    return (0);
}
