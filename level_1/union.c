#include <unistd.h>

int char_in_full(char *s, char c)
{
    while(*s)
    {
        if(*s == c)
            return (1);
        s++;
    }
    return(0);
}

int char_before(char *s, int upto, char c)
{
    int i;

    i = 0;
    while(i < upto)
    {
        if (s[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;

    if(argc != 3)
    {
        write(1, "\n", 1);
        return(0);
    }
    i = 0;
    while(argv[1][i])
    {
        if(!char_before(argv[1], i, argv[1][i]))
            write(1, &argv[1][i], 1);
        i++;
    }
    i = 0;
    while(argv[2][i])
    {
        if (!char_before(argv[2], i, argv[2][i])
            && !char_in_full(argv[1], argv[2][i]))
            write(1, &argv[2][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}