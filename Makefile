# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 09:49:18 by hmaronen          #+#    #+#              #
#    Updated: 2021/12/03 13:30:20 by hmaronen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATH = ../
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADER = ..//libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) ..//libft.a ../libft/*.c ../libft_tests/test_* ../libft_tests/main.c
	gcc $(FLAGS) -I $(HEADER) 
	ar rc $(NAME) $(O_FILES)
	ranlib $(NAME)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
