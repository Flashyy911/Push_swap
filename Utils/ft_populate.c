/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_populate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:08:20 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/07 18:08:48 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

s_list *ft_populate( char **argv)
{
    char **new_string;
    int j;
    s_list *tmp;
    s_list *stack_a;

    stack_a = NULL;
    while(*argv)
    {
        new_string = ft_split(*argv, ' ');
        j = 0;
        while (new_string[j] != NULL)
        {
            if (!ft_check_string_is_number(new_string[j]) || !ft_check_input(new_string[j]))
            {
                ft_stackclear(&tmp);
                free(new_string);
                return NULL;
            }
            if (stack_a == NULL)
            {
                stack_a = ft_new_stack_list(ft_atoi(new_string[j++]));
                tmp = stack_a;
            }
            else
            {
                stack_a->next = ft_new_stack_list(ft_atoi(new_string[j++]));
                stack_a = stack_a->next;
            }
        }
        free(new_string);
        *argv++;
    }
    if (!ft_check_duplicates_and_int(tmp))
    {
        ft_stackclear(&tmp);
        return NULL;
    }
    return tmp;
}
