# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cparis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 18:16:37 by cparis            #+#    #+#              #
#    Updated: 2016/11/11 18:17:05 by cparis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      =   gcc
RM      =   rm -f
CFLAGS  =   -Wall -Wextra -Werror
NAME    =   ft_display_file
SRCS    =   ft_display_file.c

OBJS    =   $(SRCS:.c=.o)

all:        $(NAME)

$(NAME):    $(OBJS)
	            $(CC) -o $(NAME) $(OBJS)

clean:
	            $(RM) $(OBJS)

fclean:     clean
	            $(RM) $(NAME)

re:         fclean all

.PHONY:     all clean fclean re
