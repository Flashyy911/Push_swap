cmake_minimum_required(VERSION 3.19)
project(push_swap C)

set(CMAKE_C_STANDARD 99)

add_executable(push_swap main.c Instructions/ft_swap_a.c Instructions/ft_swap_b.c Instructions/ft_swap_ss.c Instructions/ft_push_a.c Instructions/ft_push_b.c Instructions/ft_rotate_a.c Instructions/ft_rotate_b.c Instructions/ft_rotate_rr.c Instructions/ft_reverse_rotate_a.c Instructions/ft_reverse_rotate_b.c Instructions/ft_reverse_rotate_rr.c)