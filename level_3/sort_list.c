#ifndef LIST_h
# define LIST_H

typedef struct s_list
{
    int     data;
    struct s_list *next;   
}   t_list;

#endif

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap;
    t_list *curr;

    if(!lst)
        return (NULL);
    curr = lst;
    while(lst->next)
    {
        if(!cmp(lst->data, lst->next->data))
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = curr;
        }
        else
            lst->next;
    }
    return (curr);
}