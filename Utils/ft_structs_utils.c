//
// Created by Anass Sbai el idrissi on 6/5/21.
//
#include "../main.h"

s_list	*ft_new_stack_list(int value)
{
    s_list *l1;

    if (!(l1 = malloc(sizeof(s_list))))
        return (NULL);
    l1->value = (int)value;
    l1->next = NULL;
    return (l1);
}
void	ft_stackclear(s_list **lst)
{
    s_list *tmp;

    tmp = *lst;
    while ((*lst)->next)
    {
        tmp = (*lst);
        *lst = (*lst)->next;
        free(tmp);
    }
    free((*lst));
    *lst = NULL;
}
