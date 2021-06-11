//
// Created by Anass Sbai el idrissi on 6/4/21.
//

#ifndef PUSH_SWAP_MAIN_H
#define PUSH_SWAP_MAIN_H
#include <stdio.h>
#include "Libft/libft.h"
#include <stdlib.h>
#include <string.h>


typedef	struct			stack_list
{
    long long			value;
    struct stack_list		*next;
}						s_list;


int ft_check_is_int(long long nbr);
int ft_is_sorted(s_list *stack);
void ft_sort_2(s_list **stack);
void ft_sort_3(s_list **stack_a);
int ft_closest_exit (s_list *stack_a, s_list *index);
s_list *ft_stack_min (s_list *stack);
void ft_sort_10(s_list **stack_a, s_list **stack_b);
void ft_sort_100(s_list **stack_a, s_list **stack_b);
void	ft_stackclear(s_list **lst);
        int ft_stack_index(s_list *stack, s_list *index);
s_list *ft_populate(char **argv);
char **ft_handle_string_case(int argc, char** argv);
s_list	*ft_new_stack_list(long long value);
int ft_check_string_is_number(char *str);
int ft_check_duplicates_and_int(s_list *stack);
void ft_sort(s_list **stack_a, s_list **stack_b);
int ft_check_input(char *str);
int ft_stack_len(s_list *stack);
void ft_reverse_rotate_rr(s_list **stack_a, s_list **stack_b);
void ft_reverse_rotate_a(s_list **stack_a);
void ft_reverse_rotate_b(s_list **stack_b);
void ft_swap_ss(s_list **stack_a, s_list **stack_b);
void print_stack(s_list *stack_a, s_list *stack_b);
void ft_swap_b(s_list **stack_b);
void ft_swap_a(s_list **stack_a);
void ft_rotate_a(s_list **stack_a);
void ft_rotate_b(s_list **stack_b);
void ft_rotate_rr(s_list **stack_a, s_list **stack_b);
void ft_push_a(s_list **stack_a, s_list **stack_b);
void ft_push_b(s_list **stack_a, s_list **stack_b);


#endif //PUSH_SWAP_MAIN_H
