//
// Created by Anass Sbai el idrissi on 6/4/21.
//
#include "../main.h"




int ft_check_string_is_digit(char *str)
{
    if((*str == '+' || *str == '-') && *(str + 1 ))
        str++;
    while(*str)
    {
        if (!ft_isdigit(*str))
            return 0;
    str++;
    }
    return 1;
}