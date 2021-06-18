/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:20:03 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/18 12:20:06 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void ft_swap_b(s_list **stack_b)
{
    int tmp;
    int stack_len;

    stack_len = ft_stack_len(*stack_b);
    if (stack_len > 1)
        return;
    printf("sb\n");


        tmp = (*stack_b)->value;
    (*stack_b)->value = (*stack_b)->next->value;
    (*stack_b)->next->value = tmp;
}
