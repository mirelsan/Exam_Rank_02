#include <unistd.h>

int ft_atoi(const char *str)
{
    int i;
    int result;

    i = 0;
    result = 0;

    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result);
}

static void print_int(int n)
{
    char c;

    if(n >= 10)
        print_int(n/10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int n;
    int i;

    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    n = ft_atoi(argv[1]);
    i = 1;
    while (i <= 9)
    {
        print_int(i);
        write(1, " x ", 3);
        print_int(n);
        write(1, " = ", 3);
        print_int(i * n);
        write(1, "\n", 1);
        i++;
    }
    return(0);
}