#include <stddef.h>

static int is_in_set(char c, const char *s)
{
    while(*s)
    {
        if(*s == c)
            return(1);
        s++;
    }
    return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i;
    i = 0;
    while(s[i] && is_in_set(s, accept))
    {
        i++;
    }
    return(i);
}