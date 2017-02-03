# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cparis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 12:36:34 by cparis            #+#    #+#              #
#    Updated: 2016/11/11 12:57:08 by cparis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_PATH = ./srcs/
INCLUDES = ./includes/
FLAGS = -Wall -Werror -Wextra
OTHERS = -c -I $(INCLUDES)
SRC = $(SRC_PATH)ft_putchar.c $(SRC_PATH)ft_putstr.c $(SRC_PATH)ft_strcmp.c \
	  $(SRC_PATH)ft_strlen.c $(SRC_PATH)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
all: $(NAME)
$(NAME):
	gcc $(FLAGS) $(OTHERS) $(SRC)
	ar rc $(NAME) $(OBJ)
clean :
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

