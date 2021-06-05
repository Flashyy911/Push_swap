//
// Created by Anass Sbai el idrissi on 6/3/21.
//
#include "../main.h"

void ft_push_b(s_list *stack_a, s_list *stack_b)
{
    printf("push b\n");
    while(stack_a->next)
        stack_a = stack_a->next;
    while(stack_b->next)
        stack_b = stack_b->next;
    stack_b->next = ft_new_stack_list(stack_a->value);
}