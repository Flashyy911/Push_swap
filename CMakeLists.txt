cmake_minimum_required(VERSION 3.19)
project(push_swap C)

set(CMAKE_C_STANDARD 99)

add_executable(push_swap main.c Instructions/ft_swap_a.c Instructions/ft_swap_b.c Instructions/ft_swap_ss.c Instructions/ft_push_a.c Instructions/ft_push_b.c Instructions/ft_rotate_a.c Instructions/ft_rotate_b.c Instructions/ft_rotate_rr.c Instructions/ft_reverse_rotate_a.c Instructions/ft_reverse_rotate_b.c Instructions/ft_reverse_rotate_rr.c Utils/ft_populate.c main.h src/ft_sort.c Libft/libft.h Utils/ft_check_string_is_digit.c Libft/ft_lstnew_bonus.c Utils/ft_check_string_is_digit.c Libft/ft_isdigit.c Utils/ft_structs_utils.c Libft/ft_atoi.c Libft/ft_isspace.c Libft/ft_split.c Libft/ft_strlen.c Libft/ft_strlcpy.c Utils/ft_sort_utils.c)