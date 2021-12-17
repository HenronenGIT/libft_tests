# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 11:57:35 by hmaronen          #+#    #+#              #
#    Updated: 2021/12/15 13:55:05 by hmaronen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRC = ./test_1.c ./test_2.c ./test_3.c test_4.c ./test_5.c ./test_6.c \
./test_7.c ./main.c
O_FILES = $(SRCS:.c=.o)
GCC = gcc
FLAGS = -Wall -Wextra -Werror
HEADERS = -I ./includes -I ../libft/includes -I ../
LIB = ../libft/libft.a

all:
	@@$(GCC) $(FLAGS) $(SRC) $(LIB) $(HEADERS)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

run1:
	@@./$(NAME) 1
run2:
	@@./$(NAME) 2
run3:
	@@./$(NAME) 3
run4:
	@@./$(NAME) 4
run5:
	@@./$(NAME) 5
run6:
	@@./$(NAME) 6
run7:
	@@./$(NAME) 7

debug:
	$(GCC) -g $(FLAGS) $(SRC) $(LIB) $(HEADERS)
	lldb

.PHONY: all clean fclean re