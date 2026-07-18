#include <stdlib.h>
#include <unistd.h>

static int is_space(char s)
{
    return(s == ' ' || s == '\t');
}

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        if(!*argv[1])
            return (write(1, "\n", 1));
        int i = 0;
        while(is_space(argv[1][i]))
            i++;
        int start = i;
        while(!is_space(argv[1][i]) && argv[1][i])
            i++;
        int end = i;
        while(is_space(argv[1][i]))
            i++;
    
        int flag = 0;
        while(argv[1][i])
        {
            while(is_space(argv[1][i] && is_space(argv[1][i+1])))
                i++;
            if(is_space(argv[1][i]))
                flag = 1;
            write(1, &argv[1][i], 1);
            i++;
        }
        if(flag)
            write(1, " ", 1);
        while(start < end)
            write(1, &argv[1][start++], 1);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return(0);
}