/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_populate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:08:20 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 11:28:19 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../Headers/main.h"
t_s_list	*ft_populate(char **av, char **str, t_s_list *tmp, t_s_list *s)
{
	int	j;

	while (*(++av))
	{
		str = ft_split(*av, ' ');
		j = 0;
		while (str[j] != NULL)
		{
			if (!ft_string_is_number(str[j]) || !ft_check_input(str[j]))
				return (ft_normitte(tmp, str));
			if (s == NULL)
			{
				s = ft_new_stack_list(ft_atoi(str[j++]));
				tmp = s;
				continue ;
			}
			s->next = ft_new_stack_list(ft_atoi(str[j++]));
			s = s->next;
		}
		free(str[j - 1]);
		free(str);
	}
	if (!ft_check_duplicates_and_int(tmp))
		ft_stackclear(&tmp);
	return (tmp);
}

t_s_list	*ft_normitte(t_s_list *tmp, char **str)
{
	free(str);
	ft_stackclear(&tmp);
	return (NULL);
}
