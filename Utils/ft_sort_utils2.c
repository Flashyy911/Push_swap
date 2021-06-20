/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:16:39 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 12:51:27 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"
t_s_list	*ft_closest_in_range(t_s_list **stack_a, long long pivot)
{
	t_s_list	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->value <= pivot)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

long long	*ft_set_pivots(t_s_list **s_a, t_s_list *sorted_s)
{
	long long	*pivot;

	if (ft_stack_len(*s_a) <= 200)
	{
		pivot = malloc(sizeof(int) * 3);
		pivot[0] = ft_s_pos(sorted_s,
				((ft_stack_len(*s_a) * 25) / 100))->value;
		pivot[1] = ft_s_pos(sorted_s,
				((ft_stack_len(*s_a) * 50) / 100))->value;
		pivot[2] = ft_s_pos(sorted_s,
				((ft_stack_len(*s_a) * 75) / 100))->value;
	}
	else
	{
		pivot = malloc(sizeof(int) * 7);
		pivot[0] = ft_s_pos(sorted_s, ((ft_stack_len(*s_a) * 12) / 100))->value;
		pivot[1] = ft_s_pos(sorted_s, ((ft_stack_len(*s_a) * 24) / 100))->value;
		pivot[2] = ft_s_pos(sorted_s, ((ft_stack_len(*s_a) * 36) / 100))->value;
		pivot[3] = ft_s_pos(sorted_s, ((ft_stack_len(*s_a) * 48) / 100))->value;
		pivot[4] = ft_s_pos(sorted_s, ((ft_stack_len(*s_a) * 60) / 100))->value;
		pivot[5] = ft_s_pos(sorted_s, ((ft_stack_len(*s_a) * 72) / 100))->value;
		pivot[6] = ft_s_pos(sorted_s, ((ft_stack_len(*s_a) * 86) / 100))->value;
	}
	return (pivot);
}

void	ft_s_1(long long p_len, long long *p, t_s_list **a, t_s_list **b)
{
	int	i;
	int	s_index;

	i = 0;
	while (i < p_len)
	{
		if (!ft_closest_in_range(a, p[i]))
			i++;
		else
		{
			s_index = ft_stack_index(*a, ft_closest_in_range(a, p[i]));
			if (ft_closest_exit(*a, ft_closest_in_range(a, p[i])))
				while (s_index++ < ft_stack_len(*a))
					ft_reverse_rotate_a(a);
			else
				while (s_index-- > 0)
					ft_rotate_a(a);
			ft_push_b(a, b);
		}
	}
}

void	ft_sort_100_2(t_s_list **stack_a, t_s_list **stack_b)
{
	int	stack_index;

	ft_sort_3(stack_a);
	while (ft_stack_len(*stack_b))
	{
		stack_index = ft_stack_index(*stack_b, ft_stack_max(*stack_b));
		if (ft_closest_exit(*stack_b, ft_stack_max(*stack_b)))
			while (stack_index++ < ft_stack_len(*stack_b))
				ft_reverse_rotate_b(stack_b);
		else
			while (stack_index-- > 0)
				ft_rotate_b(stack_b);
		ft_push_a(stack_a, stack_b);
	}
}
