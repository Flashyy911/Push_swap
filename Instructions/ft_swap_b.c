//
// Created by Anass Sbai el idrissi on 6/3/21.
//

#include "../main.h"

void ft_swap_b(s_list *stack_b)
{
    printf("swap b\n");
    int tmp;
    while(stack_b->next->next)
        stack_b = stack_b->next;

    tmp = stack_b->value;
    stack_b->value = stack_b->next->value;
    stack_b->next->value = tmp;
}