#include <unistd.h>

int is_space(char c)
{
    return(c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
    int end;
    int start;

    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    end = 0;
    while(argv[1][end])
        end++;
    end--;
    while (end >= 0 && is_space(argv[1][end]))
        end--;
    if(end < 0)
    {
        write(1, "\n", 1);
        return(0);
    }
    start = end;
    while (start >= 0 && !is_space(argv[1][start]))
        start--;
    start++;
    write(1, &argv[1][start], end - start + 1);
    write(1, "\n", 1);
    return(0);
}