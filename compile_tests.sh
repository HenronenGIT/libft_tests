make -C ../ fclean && make -C ../
gcc -Wall -Wextra  ../libft.a ../*.c ./tests/test_* ./main.c -I ../ -o libft -I ./includes
