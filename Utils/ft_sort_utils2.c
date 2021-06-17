//
// Created by Anass Sbai el idrissi on 6/17/21.
//

#include "../main.h"

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