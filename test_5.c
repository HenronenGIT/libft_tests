/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:40:56 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/30 14:57:49 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>

/*	Test file for functions:
 *	memalloc
 *	putchar
 *	putstr
 *	putendl
 *	putnbr
 *	strnew
 *	strdel
 *	strclr
 *	strequ
 *	strnequ
 *	strsub
 *	strjoin
 *	putchar_fd
 *	putstr_fd
 *	putendl_fd
 *	putnbr_fd
 *	*/

void	test_5()
{
	/*	memalloc	*/
	printf("%sFT_MEMALLOC TESTS\n", GREEN);
	printf(RESET);
	size_t	size;
	void	*ret;
	size_t	i;

	i = 0;
	size = 5;//test with -1, so NULL return works!
	ret = ft_memalloc(size);
	printf("Should return five 0\n");
	while (i != size)//test going over the size
	{
		printf("%d", ((char *)ret)[i]);
		i++;
	}
	printf("\n");

	/*	putchar	*/
	printf("FT_PUTCHAR TESTS\n");

	ft_putchar('H');
	ft_putchar('\n');
	
	/*	putstr	*/
	printf("FT_PUTSTR TESTS\n");
	ft_putstr("Hello world!");
	printf("\n");

	/*	putendl	*/
	printf("%sFT_PUTENDL TESTS\n", GREEN);
	printf(RESET);
	ft_putendl("Hello World!");
	printf("Should be new line");
	printf("\n");

	/*	ft_putnbr	*/
	printf("\nFT_PUTNBR TESTS\n\n");

	ft_putnbr(4);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(1000000000);
	write(2, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);

	/*	strnew	*/
	printf("%sFT_STRNEW TESTS\n", GREEN);
	printf(RESET);

	char	*rt;
	rt = ft_strnew(5);
	rt[5] = 'H';

	printf("%c\n", rt[5]);
	/*	strdel	*/
	printf("%sFT_STRNEW TESTS\n", GREEN);
	printf(RESET);
	char	*ret2;

	ret2 = ft_strnew(5);
	ft_strdel(&ret2);
	if (!ret2)
		printf("PASS\n");
	else
		printf("FAIL\n");

	/*	strclr	*/
	printf("%sFT_STRCLR TESTS\n", GREEN);
	printf(RESET);
	char	str[] = "Hello world!";
	char	*str2;

	str2 = NULL;
	printf("|%s|\n", str);
	ft_strclr(str);
	printf("|%s|\n", str);
	ft_strclr(str2);
	
	/*	strequ	*/
	printf("%sFT_STREQU TESTS\n", GREEN);
	printf(RESET);
	const char	*str1;
	const char	*str3;
	str1 = NULL;
	str2 = NULL;

	printf("Should be 0\n");
	printf("%d\n\n", ft_strequ(str1, str3));
	printf("Should be 1\n");
	printf("%d\n\n", ft_strequ("abcd", "abcd"));
	printf("Should be 0\n");
	printf("%d\n\n", ft_strequ("abCd", "abcd"));
	printf("Should be 1\n");
	printf("%d\n\n", ft_strequ("", ""));
	printf("Should be 0\n");
	printf("%d\n\n", ft_strequ("c", "C"));
	printf("Should be 0\n");
	printf("%d\n\n", ft_strequ("abCd", "abcd"));

	/*	strnequ	*/
	printf("%sFT_STRNEQU TESTS\n", GREEN);
	printf(RESET);

	printf("Expected |1|\n|%d|\n\n",ft_strnequ("abcd", "abcd", 4));
	printf("Expected |1|\n%d\n\n",ft_strnequ("abcd", "abCd", 0));
	printf("Expected |1|\n%d\n\n",ft_strnequ("abcd", "aBcd", 1));
	printf("Expected |1|\n%d\n\n",ft_strnequ("abcd", "abCd", 2));
	printf("Expected |1|\n%d\n\n",ft_strnequ("", "", 2));
	printf("Expected |0|\n%d\n\n",ft_strnequ("Abcd", "abCd", 2));
	printf("Expected |1|\n%d\n\n",ft_strnequ(NULL, NULL, 2));

	/*	strsub	*/
	printf("%sFT_STRSUB TESTS\n", GREEN);
	printf(RESET);

	printf("Expected:(null)\n");
	printf("Result:%s\n\n", ft_strsub(NULL, 0, 10));
	printf("Expected:0123456789\n");
	printf("Result:%s\n\n", ft_strsub("0123456789", 0, 10));
	printf("Expected:6789\n");
	printf("Result:%s\n\n", ft_strsub("0123456789", 6, 10));
	printf("Expected:have a pro\n");
	printf("Result:%s\n\n", ft_strsub("If you have a problem, use the man", 7, 10));

	/*	strjoin	*/

	printf("%sFT_STRJOIN TESTS\n", GREEN);
	printf(RESET);

	printf("Expected:(null)\n");
	printf("|%s|\n\n", ft_strjoin(NULL, NULL));
	printf("Expected:|Helloworld|\n");
	printf("|%s|\n\n", ft_strjoin("Hello", "world"));
	printf("Expected:||\n");
	printf("|%s|\n\n", ft_strjoin("", ""));
	printf("Expected:|Hello|\n");
	printf("|%s|\n\n", ft_strjoin("Hello", ""));
	printf("Expected:|world|\n");
	printf("|%s|\n", ft_strjoin("", "world"));

	/*	putchar_fd	*/
	printf("%sFT_PUTCHAR_FD TESTS\n", GREEN);
	printf(RESET);
	int		fd;

	fd = open("putchar_fd", O_RDWR | O_APPEND, 0644);
	if (fd == -1)
		printf("open() error!\n");
	else
	{
		ft_putchar_fd('H', fd);
		printf("Text written to 'putchar_fd' file\n");
	}
	ft_putchar_fd('\n', fd);
	close(fd);

	/*	putstr_fd	*/
	printf("%sFT_PUTSTR_FD TESTS\n", GREEN);
	printf(RESET);
	
	fd = open("putchar_fd", O_RDWR | O_APPEND , 0644);
	if (fd == -1)
		printf("open() error!\n");
	else
	{
		ft_putstr_fd("Hello world", fd);
		printf("Text written to 'putchar_fd' file\n");
	}
	ft_putchar_fd('\n', fd);
	close(fd);

	/*	putendl_fd	*/
	printf("%sFT_PUTENDL_FD TESTS\n", GREEN);
	printf(RESET);

	fd = open("putchar_fd", O_RDWR | O_APPEND , 0644);
	if (fd == -1)
		printf("open() error!\n");
	else
	{
		ft_putendl_fd("This is Marvin", fd);
		printf("Text written to 'putchar_fd' file\n");
	}
	close(fd);

	/*	putnbr_fd	*/
	printf("%sFT_PUTNBR_FD TESTS\n", GREEN);
	printf(RESET);
	fd = open("putchar_fd", O_RDWR | O_APPEND , 0644);
	if (fd == -1)
		printf("open() error!\n");
	else
	{
		ft_putnbr_fd(42, fd);
		printf("Text written to 'putchar_fd' file\n");
	}
	ft_putchar_fd('\n', fd);
	close(fd);
}
