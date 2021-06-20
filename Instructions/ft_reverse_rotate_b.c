/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:18:43 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 12:45:27 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void	ft_reverse_rotate_b(t_s_list **stack_b)
{
	t_s_list	*tmp;

	ft_putstr_fd("rrb\n", 1);
	tmp = *stack_b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = *stack_b;
	*stack_b = tmp->next;
	tmp->next = NULL;
}
