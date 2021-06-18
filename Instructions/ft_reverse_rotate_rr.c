/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_rr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:18:58 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/18 12:19:01 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"

void ft_reverse_rotate_rr(s_list **stack_a, s_list **stack_b)
{
    ft_reverse_rotate_a(stack_a);
    ft_reverse_rotate_b(stack_b);
}
