//
// Created by Anass Sbai el idrissi on 6/3/21.
//

#include "../main.h"

void ft_swap_b(s_list **stack_b)
{
    int tmp;
    int stack_len;

    stack_len = ft_stack_len(*stack_b);
    if (stack_len > 1)
        return;
    printf("sb\n");


        tmp = (*stack_b)->value;
    (*stack_b)->value = (*stack_b)->next->value;
    (*stack_b)->next->value = tmp;
}