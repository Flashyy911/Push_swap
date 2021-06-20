/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:20:03 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 12:46:59 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void	ft_swap_b(t_s_list **stack_b)
{
	int	tmp;
	int	stack_len;

	stack_len = ft_stack_len(*stack_b);
	if (stack_len > 1)
		return ;
	ft_putstr_fd("sb\n", 1);
	tmp = (*stack_b)->value;
	(*stack_b)->value = (*stack_b)->next->value;
	(*stack_b)->next->value = tmp;
}
