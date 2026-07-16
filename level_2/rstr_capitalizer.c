#include <unistd.h>

static int is_space(char c)
{
    if(c == ' ' || (c >= '\t' && c <= '\r'))
        return 1;
    return 0;
}

int is_alpha(char c)
{
    if(c >= 'a' && c <= 'z')
        return 1;
    return 0;
}
int is_upper(char c)
{
    if(c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

char *to_lower(char *s)
{
    int i = -1;
    while(s[++i])
    {
        if(is_upper(s[i]))
            s[i] += 32;
    }
    return s;
}
int main(int argc, char **argv)
{
    int i = 0;

    if(argc > 1)
    {
        while(argv[++i])
        {
            argv[i] = to_lower(argv[i]);
            int j = -1;
            while(argv[i][++j])
            {
                if((is_space(argv[i][j + 1]) && is_alpha(argv[i][j])) || (!argv[i][j + 1] && is_alpha(argv[i][j])))
                    argv[i][j] -= 32;
                write(1, &argv[i][j], 1);
            }
            write(1, "\n", 1);
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}