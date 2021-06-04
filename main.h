//
// Created by Anass Sbai el idrissi on 6/4/21.
//

#ifndef PUSH_SWAP_MAIN_H
#define PUSH_SWAP_MAIN_H
#include <stdio.h>
#include "Libft/libft.h"
#include <stdlib.h>
#include <string.h>
#include <libc.h>


typedef	struct			stack_list
{
    void				*content;
    struct s_list		*next;
}						s_list;


void ft_sort(int stack_len,int *stack_a, int *stack_b);
int ft_populate(int argc, char **argv, int **stack_a, int **stack_b);
int ft_check_string_is_digit(char *str);

#endif //PUSH_SWAP_MAIN_H
