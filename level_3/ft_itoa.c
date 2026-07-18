#include <unistd.h>

static int ft_nbrlen(int n)
{
    if(n == 0)
        return 1;

    int len;
    len = 0;
    while(n > 0)
    {
        len++;
        n /= 10;
    }
    return(len);
}

static void write_digits(char *str, int len, long n, int start)
{
    while(len > 0)
    {
        str[start + len - 1] = (n % 10) + '0';
        n /= 10;
        len--;
    }
}

char *ft_itoa(int nbr)
{
    long n;
    int sign;
    int len;
    char *str;

    n = nbr;
    sign = (n < 0);
    if(sign)
        n = -n;
    len = ft_nbrlen(n);
    str = malloc(sizeof(char) * (len + sign + 1));
    if(!str)
        return (NULL);
    str[len + sign] = '\0';
    if(sign)
        str[0] = '-';
    write_digits(str, len, n, sign);
    return(str);
}