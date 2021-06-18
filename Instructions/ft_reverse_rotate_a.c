/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:18:31 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/18 12:18:34 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void ft_reverse_rotate_a(s_list **stack_a) {

    s_list *tmp;
    printf("rra\n");
    tmp = *stack_a;
    //last element becomes first
    while (tmp->next->next)
        tmp = tmp->next;
    tmp->next->next = *stack_a;
    *stack_a = tmp->next;
    tmp->next = NULL;

}
