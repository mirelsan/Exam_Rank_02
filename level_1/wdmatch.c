#include <unistd.h>

int is_subsequence(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(s1[i] && s2[j])
    {
        if(s1[i] == s2[j])
            i++;
        j++;
    }
    return (s1[i] == '\0');
}
int len(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return(i);
}
int main(int argc, char **argv)
{
    if(argc != 3)
    {
        write(1, "\n", 1);
        return(0);
    }

    if (is_subsequence(argv[1], argv[2]))
        write(1, argv[1], len(argv[1]));
    write(1, "\n", 1);
    return(0);
}