#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        write(1, "\n", 1);
        return(0);
    }

    int i = 0;
    while(argv[1][i] != '\0' && argv[2][i] != '\0')
    {
        if(argv[1][i] == argv[2][i])
        
    }
}