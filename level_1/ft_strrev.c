
char    *ft_strrev(char *str)
{
    int tmp;
    int i;
    int j;
    
    i = 0;
    while(str[i])
        i++;
    i = 0;
    j = i - 1;
    while(i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return(str);
}
