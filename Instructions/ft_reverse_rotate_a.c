/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:18:31 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 12:45:06 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void	ft_reverse_rotate_a(t_s_list **stack_a)
{
	t_s_list	*tmp;

	ft_putstr_fd("rra\n", 1);
	tmp = *stack_a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = *stack_a;
	*stack_a = tmp->next;
	tmp->next = NULL;
}
