//
// Created by Anass Sbai el idrissi on 6/4/21.
//
#include "../main.h"


void ft_sort(s_list **stack_a, s_list **stack_b)
{
    if (ft_is_sorted(*stack_a))
        return;
    if(ft_stack_len(*stack_a) == 1)
        return;
    else if(ft_stack_len(*stack_a) == 2)
        ft_sort_2(stack_a);
    else if(ft_stack_len(*stack_a) == 3)
        ft_sort_3(stack_a);
    else if(ft_stack_len(*stack_a) <= 10)
        ft_sort_10(stack_a, stack_b);

}


void ft_sort_2(s_list **stack)
{
    if((*stack)->value > (*stack)->next->value)
        ft_swap_a(stack);
}

void ft_sort_3(s_list **stack_a)
{
    s_list 	*first;
    s_list 	*second;
    s_list 	*third;

    first = *stack_a;
    second = first->next;
    third = second->next;
    if ((first->value > second->value) && (first->value < third->value))
        ft_swap_a(stack_a);
    else if ((first->value > second->value) && (second->value > third->value))
    {
        ft_swap_a(stack_a);
        ft_reverse_rotate_a(stack_a);
    }
    else if ((first->value > second->value) && (second->value < third->value))
        ft_rotate_a(stack_a);
    else if ((first->value < second->value) && (first->value < third->value))
    {
        ft_reverse_rotate_a(stack_a);
        ft_swap_a(stack_a);
    }
    else if ((first->value < second->value) && (first->value > third->value))
        ft_reverse_rotate_a(stack_a);
}


void ft_sort_10(s_list **stack_a, s_list **stack_b)
{

}