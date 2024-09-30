#include "get_next_line.h"

char    *ft_strchr(const char *str, int c)
{
        size_t  i;

        i = 0;
        while (str[i])
        {
                if ((unsigned char)str[i] == (unsigned char)c)
                {
                        return ((char *)str + i);
                }
                i++;
        }
        if ((unsigned char)str[i] == (unsigned char)c)
        {
                return ((char *)(str + i));
        }
        return (NULL);
}
size_t  ft_strlen(const char *str)
{
        size_t  i;

        i = 0;
        while (str[i])
        {
                i++;
        }
        return (i);
}
/*char *ft_strncpy(char *dest, const char *src, size_t n) 
{
    size_t i;
    i  = 0;

    while( i < n && src[i] != '\0') 
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n) 
    {
        dest[i] = '\0';
    }

    return dest;
}*/
char	*ft_strdup(const char *str)
{
	char	*dup;

	dup = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, str, ft_strlen(str) + 1);
	return (dup);
}
char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int	len(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = len(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}