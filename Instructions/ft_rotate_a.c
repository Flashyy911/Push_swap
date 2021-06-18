/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:19:07 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/18 12:19:09 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void ft_rotate_a(s_list **stack_a) {
    s_list *tmp;

    printf("ra\n");
    tmp = *stack_a;

    while(tmp->next)
        tmp = tmp->next;
    tmp->next = (*stack_a);

    *stack_a = (*stack_a)->next;
    tmp->next->next = NULL;
}
