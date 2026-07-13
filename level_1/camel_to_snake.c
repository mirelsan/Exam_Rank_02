#include <unistd.h>
#include <stdlib.h>

int is_upper(char c)
{
    return(c >= 'A' && c <= 'Z');
}

int count_size(char *s)
{
    int size;
    size = 0;

    while(*s)
    {
        if(is_upper(*s))
            size += 2;
        else
            size += 1;
        s++;    
    }
    return(size);
}

int main(int argc, char **argv)
{

    char *out;
    int size;
    int i;
    int j;

    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    size = count_size(argv[1]);
    out = malloc(size + 1);

    if(!out)
        return(1);

     i = 0;
     j = 0;
    while(argv[1][i] != '\0')
    {
        if(is_upper(argv[1][i]))
        {
            out[j++] = '_';
            out[j++] = argv[1][i] + 32;
        }
        else
            out[j++] = argv[1][i];
        i++;    
    }
    out[j] = '\n';
    write(1, out, j + 1);
    free(out);
    return(0);
}