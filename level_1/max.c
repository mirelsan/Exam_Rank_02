int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int biggest;

    if(len == 0)
        return(0);

    biggest = tab[0];
    i = 1;
    while(i < len)
    {
        if(tab[i] > biggest)
            biggest = tab[i];
        i++;
    }
    return(biggest);
}
