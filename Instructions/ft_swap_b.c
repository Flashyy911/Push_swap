//
// Created by Anass Sbai el idrissi on 6/3/21.
//

#include "../main.h"

void ft_swap_b(s_list **stack_b)
{
    int tmp;

    printf("swap b\n");
    tmp = (*stack_b)->value;
    (*stack_b)->value = (*stack_b)->next->value;
    (*stack_b)->next->value = tmp;
}