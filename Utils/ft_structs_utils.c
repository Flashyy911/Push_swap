//
// Created by Anass Sbai el idrissi on 6/5/21.
//
#include "../main.h"

s_list	*ft_new_stack_list(long long value)
{
    s_list *l1;

    if (!(l1 = malloc(sizeof(s_list))))
        return (NULL);
    l1->value = value;
    l1->next = NULL;
    return (l1);
}
void	ft_stackclear(s_list **lst)
{
    s_list *tmp;

    if (!*lst)
        return;
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

int ft_stack_len(s_list *stack)
{
    int i;

    i = 0;
    while (stack)
    {
        stack = stack->next;
        i++;
    }
    return i;
}