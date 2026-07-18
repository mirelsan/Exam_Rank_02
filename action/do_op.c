#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
//+ - * / %
static void do_op(char *num1_str, char *op, char *num2_str)
{
    int n1;
    int n2;

    n1 = atoi(num1_str);
    n2 = atoi(num2_str);
    if(op[0] == '+')
        printf("%d\n", n1 + n2);
    else if(op[0] == '-')
        printf("%d\n", n1 - n2);
    else if(op[0] == '*')
        printf("%d\n", n1 * n2);
    else if(op[0] == '/')
    {
        if(n2 != 0)
            printf("%d\n", n1 / n2);
    }
    else if(op[0] == '%')
    {
        if(n2 != 0)
            printf("%d\n", n1 % n2);
    }
}
int main(int argc, char **argv)
{
    if(argc != 4)
    {
        write(1, "\n", 1);
        return(0);
    }
    do_op(argv[1], argv[2], argv[3]);
    return(0);
}