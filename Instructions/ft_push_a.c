//
// Created by Anass Sbai el idrissi on 6/3/21.
//
#include "../main.h"

void ft_push_a(s_list **stack_a, s_list **stack_b)
{
    s_list *tmp;
    int stack_len;

    printf("pa\n");
    stack_len = ft_stack_len(*stack_b);
    if (stack_len < 1)
        return;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next =(*stack_a);
    *stack_a = tmp;
}