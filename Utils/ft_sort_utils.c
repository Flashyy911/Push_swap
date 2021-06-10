//
// Created by Anass Sbai el idrissi on 6/9/21.
//

#include "../main.h"


int ft_is_sorted(s_list *stack)
{
    while(stack->next)
    {
        if (stack->value > stack->next->value)
            return 0;
        stack = stack->next;
    }
    return 1;
}

int ft_closest_exit (s_list *stack, s_list *index)
{
    int stack_index;
    int stack_len;

    stack_len = ft_stack_len(stack);
    stack_index = ft_stack_index(stack, index);
    if (stack_index > (stack_len/2))
        return 1;
    return 0;
}


s_list *ft_stack_min (s_list *stack)
{
    s_list *stack_min;

    stack_min = stack;
    stack = stack->next;
    while (stack)
    {
        if (stack->value < stack_min->value )
            stack_min = stack;
        stack = stack->next;
    }
    return stack_min;

}

int ft_stack_index(s_list *stack, s_list *index)
{
    int i;

    i = 0;
    while (stack)
    {
        if (stack->value == index->value)
            return i;
        i++;
        stack = stack->next;
    }
    return i;
}