int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int sign;
    long result;
    int digit;

    i = 0;
    sign = 1;
    result = 0;

    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            digit = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            digit = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            digit = str[i] - 'A' + 10;
        else
            break ;
        if(digit >= str_base)
            break ;
        result = result *str_base + digit;
        i++;
    }
    return((int)(result * sign));
}