#include <unistd.h>

static int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

static void print_last_word(char *str)
{
    char *start;
    char *end;

   char *origin = str;

   while(*str)
        str++;

    if(str == origin)
        return ;
    
    end = str - 1;
    
    while(end >= origin && is_space(*end))
        end--;
    
    if(end < origin)
        return ;

    start = end;
    while(start >= origin && !is_space(*start))
        start--;
    start++;

    write(1, start, end - start + 1);
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    print_last_word(argv[1]);
    write(1, "\n", 1);
    return(0);
}

