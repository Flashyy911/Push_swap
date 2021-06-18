/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:18:43 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/18 12:18:47 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void ft_reverse_rotate_b(s_list **stack_b) {

    s_list *tmp;
    printf("rrb\n");
    tmp = *stack_b;
    //last element becomes first
    while (tmp->next->next)
        tmp = tmp->next;
    tmp->next->next = *stack_b;
    *stack_b = tmp->next;
    tmp->next = NULL;

}
