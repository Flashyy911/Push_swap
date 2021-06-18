# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asbai-el <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 13:17:54 by asbai-el          #+#    #+#              #
#    Updated: 2021/06/18 13:40:45 by asbai-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  	Instructions/ft_swap_a.c \
		Instructions/ft_swap_b.c Instructions/ft_swap_ss.c\
		Instructions/ft_push_a.c Instructions/ft_push_b.c\
		Instructions/ft_rotate_a.c Instructions/ft_rotate_b.c\
		Instructions/ft_rotate_rr.c Instructions/ft_reverse_rotate_a.c\
		Instructions/ft_reverse_rotate_b.c Instructions/ft_reverse_rotate_rr.c\
		Utils/ft_populate.c  src/ft_sort.c\
		Utils/ft_check_string_is_digit.c \
		Libft/ft_lstnew_bonus.c Utils/ft_check_string_is_digit.c\
		Libft/ft_isdigit.c Utils/ft_structs_utils.c\
		Libft/ft_atoi.c Libft/ft_isspace.c\
		Libft/ft_split.c Libft/ft_strlen.c\
		Libft/ft_strlcpy.c Utils/ft_sort_utils.c\
		Utils/ft_sort_utils2.c


NAME = libft.a

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o : %.c
	gcc -Wall -Wextra -Werror -c $< -o $@

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all