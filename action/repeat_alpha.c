#include <unistd.h>

static int alpha_index(char c)
{
    if(c >= 'a' && c <= 'z')
        return(c - 'a' + 1);
    if(c >= 'A' && c <= 'Z')
        return(c - 'A' + 1);
    return(0);
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    int i = 0;
    int n;
    int j;

    while(argv[1][i])
    {
        n = alpha_index(argv[1][i]);

        if(n == 0)
        {
            write(1, &argv[1][i], 1);
        }
        else
        {
            j = 0;
            while(j < n)
            {
                write(1, &argv[1][i], 1);
                j++;
            }
        }
        i++;
    }
    write(1, "\n", 1);
    return(0);
}