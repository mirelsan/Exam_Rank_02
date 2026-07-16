#include <stdio.h>
#include <stdlib.h>

static int pgcd(int a, int b)
{
    int tmp;

    while(b != 0)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return(a);
}

int main(int argc, char **argv)
{
    int a;
    int b;

    if(argc != 3)
    {
        printf("\n");
        return(0);
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("%d\n", pgcd(a, b));
    return(0);
}