//
// Created by Anass Sbai el idrissi on 6/4/21.
//
#include "../main.h"

int ft_populate(int argc, char **argv, s_list *stack_a)
{
    int i;

    i = 2;
    if (!ft_check_string_is_digit(argv[1]))
        return -1;
    while(i <=  (argc - 1))
    {
      if (!ft_check_string_is_digit(argv[i]))
          return -1;
        stack_a->next =  ft_new_stack_list((int)ft_atoi(argv[i]));
      stack_a = stack_a->next;
      i++;
    }
    return argc - 1;
}