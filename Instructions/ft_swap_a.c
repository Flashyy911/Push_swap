//
// Created by Anass Sbai el idrissi on 6/3/21.
//

#include "../main.h"

void ft_swap_a(s_list *stack_a)
{
    printf("swap a\n");
    int tmp;
    while(stack_a->next->next)
        stack_a = stack_a->next;

    tmp = stack_a->value;
    stack_a->value = stack_a->next->value;
    stack_a->next->value = tmp;
}