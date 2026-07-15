#include <unistd.h>

int is_space(char c)
{
    return(c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
    int i;
    int started;

    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }

    i = 0;
    started = 0;
    while(argv[1][i])
    {
        if(is_space(argv[1][i]))
        {
            if(started && argv[1][i + 1] && !is_space(argv[1][i + 1]))
                write(1, " ", 1);
        }
        else
        {
            write(1, &argv[1][i], 1);
            started = 1;
        }
        i++;
    }
    write(1, "\n", 1);
    return(0);
}