/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_rr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:19:37 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 12:43:20 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void	ft_rotate_rr(t_s_list **stack_a, t_s_list **stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
}
