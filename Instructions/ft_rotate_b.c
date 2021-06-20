/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:19:22 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 12:49:07 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void	ft_rotate_b(t_s_list **stack_b)
{
	t_s_list	*tmp;

	ft_putstr_fd("rb\n", 1);
	tmp = *stack_b;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = (*stack_b);
	*stack_b = (*stack_b)->next;
	tmp->next->next = NULL;
}
