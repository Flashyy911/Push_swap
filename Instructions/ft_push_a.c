/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:18:01 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/18 12:18:06 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void ft_push_a(s_list **stack_a, s_list **stack_b)
{
    s_list *tmp;
    int stack_len;

    printf("pa\n");
    stack_len = ft_stack_len(*stack_b);
    if (stack_len < 1)
        return;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next =(*stack_a);
    *stack_a = tmp;
}
