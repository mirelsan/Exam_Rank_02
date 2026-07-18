#include <unistd.h>

static int is_upper(char c)
{
    return(c >= 'A' && c <= 'Z');
}
static void camel_to_snake(char *str)
{
    int i;
    char c;

    i = 0;
    while(str[i])
    {
        if(is_upper(str[i]))
        {
            write(1, "_", 1);
            c = str[i] += 32;
            write(1, &c, 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    camel_to_snake(argv[1]);
    write(1, "\n", 1);
    return(0);
}