#include <unistd.h>

int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return(i);
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    int start = 0;
    int end = ft_strlen(argv[1]) - 1;

    while(start < end)
    {
        write(1, &argv[1][end], 1);
        end--;
    }
    write(1, "\n", 1);
    return(0);
}