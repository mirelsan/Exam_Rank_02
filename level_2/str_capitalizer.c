#include <unistd.h>

int is_space(char s)
{
    if (s == ' ' || (s >= '\t' && s <= '\r'))
        return 1;
    return 0;
}

int is_alpha(char s)
{
    if(s >= 'a' && s <= 'z')
        return 1;
    return 0;
}
int is_upper(char s)
{
    if (s >= 'A' && s <= 'Z')
        return 1;
    return 0;
}

char *is_tolower(char *s)
{
    int i;
    i = -1;
    while(s[++i])
    {
        if(is_upper(s[i]))
            s[i] += 32;
    }
    return s;
}

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        int i = 0;
        while(argv[++i])
        {
            argv[i] = is_tolower(argv[i]);
            int j = -1;
            while(argv[i][++j])
            {
                if((is_space(argv[i][j - 1]) && is_alpha(argv[i][j])) || is_alpha(argv[i][0]))
                    argv[i][j] -= 32;
                write(1, &argv[i][j], 1);
            }
            write(1, "\n", 1);
        }
    }
    else
        write(1, "\n", 1);
    return 0;
}