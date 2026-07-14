#include <stdlib.h>

static int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return(i);
}

char    *ft_strdup(char *src)
{
    char *dup;
    int i;
    int len;

    len = ft_strlen(src);
    dup = malloc(sizeof(char) * (len + 1));
    if(!dup)
        return (NULL);
    i = 0;
    while(src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);
}