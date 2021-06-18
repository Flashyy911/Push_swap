/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:19:22 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/18 12:19:24 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void ft_rotate_b(s_list **stack_b) {

    printf("rb\n");
    s_list *tmp;

    tmp = *stack_b;

    while(tmp->next)
        tmp = tmp->next;
    tmp->next = (*stack_b);

    *stack_b = (*stack_b)->next;
    tmp->next->next = NULL;
}
