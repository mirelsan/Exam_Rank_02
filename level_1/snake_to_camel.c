#include <unistd.h>
#include <stdlib.h>

int count_size(char *s)
{

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

    size = count_size;
    out = malloc(size + 1);
}