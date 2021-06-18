/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:16:39 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/18 12:16:44 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers//main.h"

s_list *ft_closest_in_range(s_list **stack_a, long long pivot)
{

    s_list *tmp;;

    tmp = *stack_a;
    while (tmp)
    {
        if (tmp->value <= pivot)
            return tmp;
        tmp = tmp->next;
    }
    return tmp;
}

long long *ft_set_pivots(s_list **stack_a, s_list *sorted_stack_a)
{
    long long *pivot;

    if (ft_stack_len(*stack_a) <= 200)
    {
        pivot = malloc(sizeof(int) * 3);
        pivot[0] = ft_stack_at_position(sorted_stack_a, ((ft_stack_len(*stack_a) * 25)/100) )->value;
        pivot[1] = ft_stack_at_position(sorted_stack_a, ((ft_stack_len(*stack_a) * 50)/100) )->value;
        pivot[2] = ft_stack_at_position(sorted_stack_a, ((ft_stack_len(*stack_a) * 75)/100) )->value;
    }
    else {
        pivot = malloc(sizeof(int) * 7);
        pivot[0] = ft_stack_at_position(sorted_stack_a, ((ft_stack_len(*stack_a) * 12)/100) )->value;
        pivot[1] = ft_stack_at_position(sorted_stack_a, ((ft_stack_len(*stack_a) * 24)/100) )->value;
        pivot[2] = ft_stack_at_position(sorted_stack_a, ((ft_stack_len(*stack_a) * 36)/100) )->value;
        pivot[3] = ft_stack_at_position(sorted_stack_a, ((ft_stack_len(*stack_a) * 48)/100) )->value;
        pivot[4] = ft_stack_at_position(sorted_stack_a, ((ft_stack_len(*stack_a) * 60)/100) )->value;
        pivot[5] = ft_stack_at_position(sorted_stack_a, ((ft_stack_len(*stack_a) * 72)/100) )->value;
        pivot[6] = ft_stack_at_position(sorted_stack_a, ((ft_stack_len(*stack_a) * 86)/100) )->value;

    }
    return pivot;
}

void ft_sort_100_1(long long pivot_length, long long *pivot,s_list **stack_a, s_list **stack_b)
{
    int i;
    int stack_index;
    i = 0;
    while (i < pivot_length) {
        if (!ft_closest_in_range(stack_a, pivot[i]))
            i++;
        else
        {
            stack_index = ft_stack_index(*stack_a, ft_closest_in_range(stack_a, pivot[i]));
            if (ft_closest_exit(*stack_a, ft_closest_in_range(stack_a, pivot[i])))
                while (stack_index++ < ft_stack_len(*stack_a))
                    ft_reverse_rotate_a(stack_a);
            else
                while (stack_index-- > 0)
                    ft_rotate_a(stack_a);
            ft_push_b(stack_a, stack_b);
        }
    }
}

void ft_sort_100_2(s_list **stack_a,s_list **stack_b)
{
    int stack_index;

    while(ft_stack_len(*stack_b))
    {
        stack_index = ft_stack_index(*stack_b,ft_stack_max(*stack_b));
        if (ft_closest_exit(*stack_b, ft_stack_max(*stack_b)))
            while(stack_index++ <  ft_stack_len(*stack_b))
                ft_reverse_rotate_b(stack_b);
        else
            while(stack_index-- > 0)
                ft_rotate_b(stack_b);
        ft_push_a(stack_a,stack_b);
    }
}
