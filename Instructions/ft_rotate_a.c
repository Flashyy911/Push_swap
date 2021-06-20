/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:19:07 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 12:48:42 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void	ft_rotate_a(t_s_list **stack_a)
{
	t_s_list	*tmp;

	ft_putstr_fd("ra\n", 1);
	tmp = *stack_a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = (*stack_a);
	*stack_a = (*stack_a)->next;
	tmp->next->next = NULL;
}
