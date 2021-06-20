/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 10:30:12 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/20 14:24:57 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Headers/main.h"
int	main(int argc, char **argv)
{
	t_s_list	*stack_a;
	t_s_list	*stack_b;
	t_s_list	*tmp;
	char		**new_string;

	new_string = NULL;
	if (argc < 2)
		return (-1);
	tmp = NULL;
	stack_b = NULL;
	stack_a = ft_populate(argv, new_string, tmp, stack_b);
	ft_stackclear(&stack_b);
	if (stack_a == NULL)
	{
		ft_putstr_fd("error\n", 1);
		return (-1);
	}
	ft_sort(&stack_a, &stack_b);
	ft_stackclear(&stack_a);
	ft_stackclear(&stack_b);
	return (0);
}
