//
// Created by Anass Sbai el idrissi on 6/3/21.
//

#include "../main.h"

void ft_reverse_rotate_b(s_list **stack_b) {

    s_list *tmp;

    tmp = *stack_b;
    //last element becomes first
    while (tmp->next->next)
        tmp = tmp->next;
    tmp->next->next = *stack_b;
    *stack_b = tmp->next;
    tmp->next = NULL;

}