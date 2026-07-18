#include <unistd.h>

static int char_in_str(char c, char *str)
{
    while(*str)
    {
        if(*str == c)
            return(1);
        str++;
    }
    return(0);
}

static int already_printed(char *s, int pos)
{
    int i = 0;
    while(i < pos)
    {
        if(s[i] == s[pos])
            return (1);
        i++;
    }
    return(0);
}

int main(int argc, char **argv)
{
    if(argc != 3)
    {
        write(1, "\n", 1);
        return(0);
    }
    int i = 0;
    while(argv[1][i])
    {
        if((char_in_str(argv[1][i], argv[2]) && !already_printed(argv[1], i)))
            write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}