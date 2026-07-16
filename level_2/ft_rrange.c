#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *arr;
    int size;
    int i;
    int step;

    if(end >= start)
    {
        size = end - start + 1;
        step = 1;
    }
    else
    {
        size = start - end + 1;
        step = -1;
    }
    arr = (int *)malloc(sizeof(int) * size);
    if(!arr)
        return (NULL);
    i = 0;
    while(i < size)
    {
        arr[i] = end + (i * step);
        i++;
    }
    return(arr);
}