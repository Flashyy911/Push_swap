# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 13:17:54 by asbai-el          #+#    #+#              #
#    Updated: 2021/06/20 14:32:08 by asbai-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = Headers/main.h

PROG1 = push_swap

PUSHS_SRCS = main.c Instructions/ft_swap_a.c \
		Instructions/ft_swap_b.c Instructions/ft_swap_ss.c\
		Instructions/ft_push_a.c Instructions/ft_push_b.c\
		Instructions/ft_rotate_a.c Instructions/ft_rotate_b.c\
		Instructions/ft_rotate_rr.c Instructions/ft_reverse_rotate_a.c\
		Instructions/ft_reverse_rotate_b.c Instructions/ft_reverse_rotate_rr.c\
		Utils/ft_populate.c  src/ft_sort.c\
		Utils/ft_sort_utils.c\
		Utils/ft_structs_utils.c  Utils/ft_check_string_is_digit.c\
		Utils/ft_sort_utils2.c

LIBFT = libft.a

LIBFT_SRCS = Libft/ft_isdigit.c \
		Libft/ft_atoi.c Libft/ft_isspace.c\
		Libft/ft_split.c Libft/ft_strlen.c\
		Libft/ft_strlcpy.c Libft/ft_putstr_fd.c\
		Libft/ft_putchar_fd.c

LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)

all: $(PROG1)

$(PROG1): $(PUSHS_SRCS) $(LIBFT) $(HEADER)
	$(CC) $(CFLAGS) $(PUSHS_SRCS) $(LIBFT) -o $(PROG1)

$(LIBFT): $(LIBFT_OBJS)
	ar rcs $(LIBFT) $(LIBFT_OBJS)

clean:
	rm -f $(LIBFT_OBJS)

fclean: clean
	rm -f $(PROG1) $(LIBFT)

re: fclean all
