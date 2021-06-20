/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 13:55:25 by asbai-el          #+#    #+#             */
/*   Updated: 2021/06/19 12:08:14 by asbai-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <stdio.h>
# include "../Libft/libft.h"
# include <stdlib.h>
# include <string.h>

typedef struct s_stack_list
{
	long long				value;
	struct s_stack_list		*next;
}						t_s_list;
int			ft_check_is_int(long long nbr);
int			ft_is_sorted(t_s_list *stack);
void		ft_sort_2(t_s_list **stack);
void		ft_sort_3(t_s_list **stack_a);
int			ft_closest_exit (t_s_list *stack_a, t_s_list *index);
t_s_list	*ft_stack_min (t_s_list *stack);
t_s_list	*ft_stack_max (t_s_list *stack);
long long	*ft_set_pivots(t_s_list **s_a, t_s_list *sorted_s);
t_s_list	*ft_s_pos(t_s_list *stack, int pos);
t_s_list	*ft_closest_in_range(t_s_list **stack_a, long long pivot);
t_s_list	*ft_sort_stack(t_s_list **stack_a);
void		ft_sort_10(t_s_list **stack_a, t_s_list **stack_b);
void		ft_sort_100(t_s_list **stack_a, t_s_list **stack_b);
void		ft_stackclear(t_s_list **lst);
int			ft_stack_index(t_s_list *stack, t_s_list *index);
t_s_list	*ft_populate(char **av, char **str, t_s_list *tmp, t_s_list *s);
t_s_list	*ft_normitte(t_s_list *tmp, char **str);
char		**ft_handle_string_case(int argc, char **argv);
t_s_list	*ft_new_stack_list(long long value);
int			ft_string_is_number(char *str);
int			ft_check_duplicates_and_int(t_s_list *stack);
void		ft_sort(t_s_list **stack_a, t_s_list **stack_b);
int			ft_check_input(char *str);
int			ft_stack_len(t_s_list *stack);
void		ft_reverse_rotate_rr(t_s_list **stack_a, t_s_list **stack_b);
void		ft_reverse_rotate_a(t_s_list **stack_a);
void		ft_reverse_rotate_b(t_s_list **stack_b);
void		ft_sort_100_2(t_s_list **stack_a, t_s_list **stack_b);
void		ft_swap_ss(t_s_list **stack_a, t_s_list **stack_b);
void		print_stack(t_s_list *stack_a, t_s_list *stack_b);
void		ft_swap_b(t_s_list **stack_b);
void		ft_swap_a(t_s_list **stack_a);
void		ft_rotate_a(t_s_list **stack_a);
void		ft_rotate_b(t_s_list **stack_b);
void		ft_s_1(long long p_len, long long *p, t_s_list **a, t_s_list **b);
void		ft_rotate_rr(t_s_list **stack_a, t_s_list **stack_b);
void		ft_push_a(t_s_list **stack_a, t_s_list **stack_b);
void		ft_push_b(t_s_list **stack_a, t_s_list **stack_b);
#endif
