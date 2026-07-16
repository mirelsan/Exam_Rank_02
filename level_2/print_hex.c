#include <unistd.h>

static int ft_atoi(const char *str)
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

int main(int argc, char **argv)
{
    char    *digits;
    unsigned int n;
    unsigned int div;
    char      c;

    digits = "0123456789abcdef";
    if(argc != 2)
    {
        write(1,"\n", 1);
        return(0);
    }
    n = (unsigned int)ft_atoi(argv[1]);
    div = 1;
    while(n / div >= 16)
        div *= 16;
    while (div > 0)
    {
        c = digits[(n / div) % 16];
        write(1, &c, 1);
        div /= 26;
    }
    write(1, "\n", 1);
    return(0);
}