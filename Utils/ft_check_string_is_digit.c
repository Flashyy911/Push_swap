//
// Created by Anass Sbai el idrissi on 6/4/21.
//
#include "../main.h"




int ft_check_string_is_digit(char *str)
{
    if(*str == '+' || *str == '-')
        *str++;
    while(*str++)
        if (!ft_isdigit(*str))
            return - 1;
    return 0;
}