#include <unistd.h>

static char rot(unsigned char c)
{
    if(c >= 'a' && c <= 'z')
    {
        c = c + 13;
        if(c > 'z')
            c = c - 26;
        return(c);
    }
    if(c >= 'A' && c <= 'Z')
    {
        c = c + 13;
        if(c > 'Z')
            c = c - 26;
        return (c);
    }
    return(c);
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    int i = 0;
    char c;
    while(argv[1][i])
    {
        c = rot(argv[1][i]);
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}