//
// Created by Anass Sbai el idrissi on 6/3/21.
//

#include "../main.h"

void ft_rotate_a(s_list **stack_a) {
    s_list *tmp;

    printf("ra\n");
    tmp = *stack_a;

    while(tmp->next)
        tmp = tmp->next;
    tmp->next = (*stack_a);

    *stack_a = (*stack_a)->next;
    tmp->next->next = NULL;
}