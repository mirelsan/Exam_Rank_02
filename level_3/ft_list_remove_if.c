#include <stdlib.h>
#include "ft_list.h"

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#endif

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current;
    t_list *prev;
    t_list *tmp;

    if(!begin_list || !cmp)
        return ;
    current = *begin_list;
    prev = NULL;

    while(current)
    {
        if(cmp(current->data, data ref) == 0)
        {
            tmp = current->next;
            if(prev)
                prev->next = tmp;
            else
                *begin_list = tmp;
            free(current);
            current = tmp; 
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
}