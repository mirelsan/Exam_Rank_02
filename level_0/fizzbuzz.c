#include <unistd.h>

void print_nbr(int n)
{
    if(n >= 10)
    {
        print_nbr(n / 10);
    }
    char c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(void)
{
    int i = 1;

    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 10);
        else if(i % 5 == 0)
            write(1, "buzz\n", 6);
        else if(i % 3 == 0)
            write(1, "fizz\n", 6);
        else
        {
            print_nbr(i);
            write(1, "\n", 1);
        }
        i++;
    }
    return(0);
}