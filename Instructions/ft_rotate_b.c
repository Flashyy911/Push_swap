//
// Created by Anass Sbai el idrissi on 6/3/21.
//

#include "../main.h"

void ft_rotate_b(s_list **stack_b) {

    printf("rotate b");
    s_list *tmp;

    tmp = *stack_b;

    while(tmp->next)
        tmp = tmp->next;
    tmp->next = (*stack_b);

    *stack_b = (*stack_b)->next;
    tmp->next->next = NULL;
}