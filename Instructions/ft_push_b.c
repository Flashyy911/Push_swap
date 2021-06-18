/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:18:12 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/18 12:18:20 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void ft_push_b(s_list **stack_a, s_list **stack_b)
{
    s_list *tmp;
    int stack_len;

    printf("pb\n");
    stack_len = ft_stack_len(*stack_a);
    if (stack_len < 1)
        return;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next =(*stack_b);
    *stack_b = tmp;
}
