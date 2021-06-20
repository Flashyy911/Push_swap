/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structs_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:16:53 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 11:54:02 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

t_s_list	*ft_new_stack_list(long long value)
{
	t_s_list	*l1;

	l1 = malloc(sizeof(t_s_list));
	if (!l1)
		return (NULL);
	l1->value = value;
	l1->next = NULL;
	return (l1);
}

void	ft_stackclear(t_s_list **lst)
{
	t_s_list	*tmp;

	if (!*lst)
		return ;
	tmp = *lst;
	while ((*lst)->next)
	{
		tmp = (*lst);
		*lst = (*lst)->next;
		free(tmp);
	}
	free((*lst));
	*lst = NULL;
}

int	ft_stack_len(t_s_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

t_s_list	*ft_stack_max (t_s_list *stack)
{
	t_s_list	*stack_max;

	stack_max = stack;
	stack = stack->next;
	while (stack)
	{
		if (stack->value > stack_max->value)
			stack_max = stack;
		stack = stack->next;
	}
	return (stack_max);
}

t_s_list	*ft_s_pos(t_s_list *stack, int pos)
{
	int	i;

	i = 1;
	while (i < pos)
	{
		stack = stack->next;
		i++;
	}
	return (stack);
}
