static int is_in_set(char c, const char *set)
{
    while(*set)
    {
        if(*set == c)
            return(1);
        set++; 
    }
    return(0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
    while(*s1)
    {
        if(is_in_set(s1, s2))
            return((char *)s1);
        s1++;
    }
    return(NULL);
}