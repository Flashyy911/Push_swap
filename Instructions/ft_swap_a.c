//
// Created by Anass Sbai el idrissi on 6/3/21.
//

#include "../main.h"

void ft_swap_a(s_list **stack_a)
{
    long long tmp;
    int stack_len;

    printf("sa\n");
    stack_len = ft_stack_len(*stack_a);
    if (stack_len > 1)
        return;
    tmp = (*stack_a)->value;
    (*stack_a)->value = (*stack_a)->next->value;
    (*stack_a)->next->value = tmp;
}