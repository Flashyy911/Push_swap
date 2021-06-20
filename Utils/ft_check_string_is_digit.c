/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_string_is_digit.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 11:30:46 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 11:34:54 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"
int	ft_string_is_number(char *str)
{
	if ((*str == '+' || *str == '-') && *(str + 1 ))
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_check_input(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str) && !((*str == '+' || *str == '-')
				&& ft_isdigit(*(str + 1))))
			return (0);
		str++;
	}
	return (1);
}

int	ft_check_duplicates_and_int(t_s_list *stack)
{
	t_s_list	*tmp;

	while (stack)
	{
		if (ft_check_is_int(stack->value) == -1)
			return (0);
		tmp = stack->next;
		while (tmp)
		{
			if (tmp->value == stack->value || tmp->value > 2147483647
				|| tmp->value < -2147483648 )
				return (0);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (1);
}

int	ft_check_is_int(long long nbr)
{
	if (nbr > 2147483647 || nbr < -2147483648)
		return (-1);
	return (0);
}
