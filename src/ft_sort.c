/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:17:38 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/18 12:17:41 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

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
    else
       ft_sort_100(stack_a, stack_b);
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

    if (ft_is_sorted(*stack_a))
        return;
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
    s_list *stack_a_top;
    int stack_a_len;
    int stack_index;

    stack_a_len = ft_stack_len(*stack_a);
    stack_a_top = *stack_a;

    while (stack_a_len > 3)
    {
        stack_index = ft_stack_index(*stack_a,ft_stack_min(*stack_a));
        if (ft_closest_exit(stack_a_top, ft_stack_min(*stack_a)))
            while(stack_index++ < stack_a_len)
                ft_reverse_rotate_a(stack_a);
        else
            while(stack_index-- > 0)
                ft_rotate_a(stack_a);
        ft_push_b(stack_a,stack_b);
        stack_a_len--;
    }
    ft_sort_3(stack_a);
    while (*stack_b)
        ft_push_a(stack_a, stack_b);
}


void ft_sort_100(s_list **stack_a, s_list **stack_b)
{
    s_list *sorted_stack_a;
    long long *pivot;
    int stack_index;
    int pivot_length;

    sorted_stack_a = ft_sort_stack(stack_a);
    pivot = ft_set_pivots(stack_a,sorted_stack_a);
    pivot_length = 3;
    if (ft_stack_len(*stack_a) >= 200)
        pivot_length = 7;
    ft_sort_100_1(pivot_length,pivot,stack_a,stack_b);
   while(ft_stack_len(*stack_a) > 3)
    {
        stack_index = ft_stack_index(*stack_a,ft_stack_min(*stack_a));
        if (ft_closest_exit(*stack_a, ft_stack_min(*stack_a)))
            while(stack_index++ <  ft_stack_len(*stack_a))
                ft_reverse_rotate_a(stack_a);
        else
            while(stack_index-- > 0)
                ft_rotate_a(stack_a);
        ft_push_b(stack_a,stack_b);
    }
    ft_sort_3(stack_a);
    ft_sort_100_2(stack_a,stack_b);
    ft_stackclear(&sorted_stack_a);
    free(pivot);
}
