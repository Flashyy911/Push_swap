//
// Created by Anass Sbai el idrissi on 6/3/21.
//
#include "../main.h"

void ft_push_b(s_list **stack_a, s_list **stack_b)
{
    s_list *tmp;

    printf("push b\n");
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next =(*stack_b);
    *stack_b = tmp;
}