#include <unistd.h>
#include <stdlib.h>

int count_size(char *s)
{
    int size;

    size = 0;
    while(*s)
    {
        if (*s != '_')
            size++;
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
    while(argv[1][i])
    {
        if(argv[1][i] == '_')
        {
            i++;
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                out[j++] = argv[1][i] - 32;
            else
                out[j++] = argv[1][i];
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