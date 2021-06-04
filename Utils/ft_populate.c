//
// Created by Anass Sbai el idrissi on 6/4/21.
//
#include "../main.h"

int ft_populate(int argc, char **argv, int **stack_a, int **stack_b)
{
    int i;
    int len;

    i = 2;
    len = 0;
    while (i++ <=  (argc - 2))
    {
      if (ft_check_string_is_digit(argv[i]))
      {
          printf("error");
          return -1;
      }

    }
    return len;
}