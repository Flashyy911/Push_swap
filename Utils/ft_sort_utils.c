/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:16:19 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 12:49:59 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

int	ft_is_sorted(t_s_list *stack)
{
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	ft_closest_exit (t_s_list *stack, t_s_list *index)
{
	int	stack_index;
	int	stack_len;

	stack_len = ft_stack_len(stack);
	stack_index = ft_stack_index(stack, index);
	if (stack_index > (stack_len / 2))
		return (1);
	return (0);
}

t_s_list	*ft_stack_min (t_s_list *stack)
{
	t_s_list	*stack_min;

	stack_min = stack;
	stack = stack->next;
	while (stack)
	{
		if (stack->value < stack_min->value)
			stack_min = stack;
		stack = stack->next;
	}
	return (stack_min);
}

int	ft_stack_index(t_s_list *stack, t_s_list *index)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->value == index->value)
			return (i);
		i++;
		stack = stack->next;
	}
	return (i);
}

t_s_list	*ft_sort_stack(t_s_list **stack_a)
{
	t_s_list		*sorted_stack;
	t_s_list		*tmp;
	t_s_list		*stack_a_head;
	t_s_list		*sorted_stack_head;
	long long		current_min;

	stack_a_head = *stack_a;
	sorted_stack = ft_new_stack_list(ft_stack_min(*stack_a)->value);
	sorted_stack_head = sorted_stack;
	while ((*stack_a)->next)
	{
		tmp = stack_a_head;
		current_min = ft_stack_max(stack_a_head)->value;
		while (tmp)
		{
			if (tmp->value > sorted_stack->value && tmp->value < current_min)
				current_min = tmp->value;
			tmp = tmp->next;
		}
		sorted_stack->next = ft_new_stack_list(current_min);
		sorted_stack = sorted_stack->next;
		*stack_a = (*stack_a)->next;
	}
	*stack_a = stack_a_head;
	return (sorted_stack_head);
}
