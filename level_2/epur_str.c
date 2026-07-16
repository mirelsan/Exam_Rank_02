#include <unistd.h>

static int is_space(char c)
{
    return(c == ' ' || c == '\t');
}
int main(int argc, char **argv)
{
    int i;
    int j;
    int first_word;

    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    i = 0;
    first_word = 1;
    while(argv[1][i])
    {
        if(!is_space(argv[1][i]))
        {
            if(!first_word)
                write(1, " ", 1);
            first_word = 0;
            j = i;
            while(argv[1][i] && !is_space(argv[1][i]))
                i++;
            write(1, argv[1] + j, i - j);
        }
        else
            i++;
    }
    write(1, "\n", 1);
    return(0);
}
