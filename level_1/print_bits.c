#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i;
    char bit;

    i = 7;
    while(i >= 0)
    {
        if(octet & (1 << i))
            bit = '1';
        else
            bit = '0';
        write(1, &bit, 1);
        i--;
    }
}