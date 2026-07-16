#include <unistd.h>

static int count_digits(int n)
{
    int count;

    count = 1;
    while(n >= 10)
    {
        n / 10;
        count++;
    }
    return(count);
}

int main(int argc, char **argv)
{
    int n;
    int len;
    char buf[12];

    (void)argv;
    n = argc - 1;
    len = count_digits(n);
    buf[len] = '\n';
    while(len > 0)
    {
        len--;
        buf[len] = (n % 10) + '0';
        n /= 10;
    }
    write(1, buf, count_digits(argc - 1) + 1);
    return(0);
}