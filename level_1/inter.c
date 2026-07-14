#include <unistd.h>

int char_in_str(char c, char *s)
{
    while(*s)
    {
        if(*s == c)
            return(1);
        s++;
    }
    return(0);
}

int already_print(char *s1, int pos)
{
    int i = 0;

    while(i < pos)
    {
        if(s1[i] == s1[pos])
            return(1);
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
    while(argv[1][i] != '\0')
    {
        if(char_in_str(argv[1][i], argv[2]) && !already_printed(argv[1], i))
            write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}