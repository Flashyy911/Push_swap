/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:18:01 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 12:40:09 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void	ft_push_a(t_s_list **stack_a, t_s_list **stack_b)
{
	t_s_list	*tmp;
	int			stack_len;

	ft_putstr_fd("pa\n", 1);
	stack_len = ft_stack_len(*stack_b);
	if (stack_len < 1)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = (*stack_a);
	*stack_a = tmp;
}
