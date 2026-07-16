#include "ft_list.h"

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
    struct s_list *next;
    void          *data;
                  t_list;
}

#endif

int ft_list_size(t_list *begin_list)
{
    int count;

    count = 0;

    while(begin_list)
    {
        count++;
        begin_list = begin_list->next;
    }
    return (count);
}