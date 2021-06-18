/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:19:52 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/18 12:19:55 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void ft_swap_a(s_list **stack_a)
{
    long long tmp;
    int stack_len;

    printf("sa\n");
    stack_len = ft_stack_len(*stack_a);
    if (stack_len > 1)
        return;
    tmp = (*stack_a)->value;
    (*stack_a)->value = (*stack_a)->next->value;
    (*stack_a)->next->value = tmp;
}
