#include <unistd.h>

int is_valid(char *s)
{
    int i;

    if(!s[0])
        return(0);
    i = 0;
    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return(0);
        i++;
    }
    return(1);
}

int to_int(char *s)
{
    int n;
    int i;

    n = 0;
    i = 0;
    while(s[i])
    {
        n = n * 10 + (s[i] - '0');
        i++;
    }
    return(n);
}

int is_prime(int n)
{
    int i;

    if (n < 2)
        return(0);
    i = 2;
    while(i < n)
    {
        if(n % i == 0)
            return(0);
        i++;
    }
    return(1);
}

void put_nbr(int n)
{
    char c;
    if(n >= 10)
        put_nbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int n;
    int i;
    long sum;

    if(argc != 2 || !is_valid(argv[1]))
    {
        write(1, "0\n", 2);
        return(0);
    }
    n = to_int(argv[1]);
    sum = 0;
    i = 2;
    while(i <= n)
    {
        if (is_prime(i))
            sum += i;
        i++;
    }
    put_nbr(sum);
    write(1, "\n", 1);
    return(0);
}