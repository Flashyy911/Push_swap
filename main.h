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
    int				value;
    struct stack_list		*next;
}						s_list;



void	ft_stackclear(s_list **lst);
int ft_populate(int argc, char **argv, s_list *stack_a);
s_list	*ft_new_stack_list(int value);
int ft_check_string_is_digit(char *str);


void ft_sort(int stack_len,s_list **stack_a, s_list **stack_b);
void ft_reverse_rotate_rr(s_list **stack_a, s_list **stack_b);
void ft_reverse_rotate_a(s_list **stack_a);
void ft_reverse_rotate_b(s_list **stack_b);
void ft_swap_ss(s_list **stack_a, s_list **stack_b);
void ft_swap_b(s_list **stack_b);
void ft_swap_a(s_list **stack_a);
void ft_rotate_a(s_list **stack_a);
void ft_rotate_b(s_list **stack_b);
void ft_rotate_rr(s_list **stack_a, s_list **stack_b);
void ft_push_a(s_list **stack_a, s_list **stack_b);
void ft_push_b(s_list **stack_a, s_list **stack_b);


#endif //PUSH_SWAP_MAIN_H
