//
// Created by Anass Sbai el idrissi on 6/3/21.
//

#include "../main.h"

void ft_reverse_rotate_a(s_list **stack_a) {

    s_list *tmp;

    tmp = *stack_a;
    //last element becomes first
    while (tmp->next->next)
        tmp = tmp->next;
    tmp->next->next = *stack_a;
    *stack_a = tmp->next;
    tmp->next = NULL;

}