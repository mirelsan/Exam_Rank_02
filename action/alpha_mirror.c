#include <unistd.h>

static char ft_transform_char(char c)
{
    if(c >= 'a' && c <= 'z')
        return('z' - (c -'a'));
    if(c >= 'A' && c <= 'Z')
        return('Z' - (c - 'A'));
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
        c = ft_transform_char(argv[1][i]);
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}