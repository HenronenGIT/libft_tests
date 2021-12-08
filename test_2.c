/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:04:41 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/29 16:15:00 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include "colors.h"

/*	Test file for functions: 
 *	toupper
 *	tolower
 *	memchr
 *	strchr
 *	strrchr
 *	bzero
 */

void	test_2()
{
	/*	ft_toupper	*/
	printf("%sFT_TOUPPER TESTS\n", GREEN);
	printf(RESET);
	printf("%c ", toupper('a'));
	printf("%c\n", ft_toupper('a'));

	printf("%c ", toupper('!'));
	printf("%c\n", ft_toupper('!'));

	printf("%c ", toupper('@'));
	printf("%c\n", ft_toupper('@'));

	printf("%c ", toupper('C'));
	printf("%c\n", ft_toupper('C'));

	/*	ft_tolower	*/
	printf("%sFT_TOLOWER TESTS\n", GREEN);
	printf(RESET);

	printf("%c ", tolower('A'));	
	printf("%c \n", ft_tolower('A'));
	printf("%c ", tolower('a'));	
	printf("%c \n", ft_tolower('a'));
	printf("%c ", tolower('4'));	
	printf("%c \n", ft_tolower('4'));
	printf("%c ", tolower('#'));	
	printf("%c \n", ft_tolower('#'));
	printf("%c ", tolower('Z'));	
	printf("%c \n", ft_tolower('Z'));

	/*	ft_memchr	*/
	printf("%sFT_MEMCHR TESTS\n", GREEN);
	printf(RESET);
	const char	*s1;

	s1 = "Hello world!";
	printf("%s\n", memchr(s1, 'e', 5));
	printf("%s\n\n", ft_memchr(s1, 'e', 5));

	printf("%s\n", memchr(s1, 'e', 0));
	printf("%s\n\n", ft_memchr(s1, 'e', 0));

	printf("%s\n", memchr(s1, 'b', 10));
	printf("%s\n\n", ft_memchr(s1, 'b', 10));

	printf("%s\n", memchr(s1, '\0', 10));
	printf("%s\n", ft_memchr(s1, '\0', 10));

	/*	ft_strchr	*/
	printf("%sFT_STRCHR TESTS", GREEN);
	printf(RESET);
	const char	str1[50] = "Hellob world";
	const char	str2[50] = "Hello\0wor\0ld";

	printf("\n%s\n",(strchr(str1, 'b')));
	printf("%s\n\n",ft_strchr(str1, 'b'));

	printf("%s\n",(strchr(str1, 'c')));
	printf("%s\n\n",(ft_strchr(str2, 'c')));

	printf("|%s|\n",(strchr(str2, '\0')));
	printf("|%s|\n\n",(ft_strchr(str2, '\0')));

	/*	strrchr	*/
	printf("%sFT_STRCHR TESTS", GREEN);
	printf(RESET);

	printf("\n%s\n",strrchr("This is ab worbld!", 'b'));
	printf("%s\n\n",ft_strrchr("This is ab worbld!", 'b'));

	printf("|%s|\n",strrchr("hel\0lo", '\0'));
	printf("|%s|\n\n",ft_strrchr("hel\0lo", '\0'));

	printf("|%s|\n",strrchr("", '\0'));
	printf("|%s|\n\n",ft_strrchr("", '\0'));

	printf("|%s|\n",strrchr("hello", 'h'));
	printf("|%s|\n\n",ft_strrchr("hello", 'h'));

	/*	ft_bzero	*/
	printf("%sFT_BZERO TESTS\n", GREEN);
	printf(RESET);
	char	str4[50] = "Hello world";
	char *str5 = ft_strdup(str4);

	printf("Before bzero:\n|%s|\n", str4);
	bzero(str4, ft_strlen(str4));
	printf("After bzero\n|%s|\n\n", str4);

	printf("Before ft_bzero:\n|%s|\n", str5);
	ft_bzero(str5, ft_strlen(str5));
	printf("After:\n|%s|\n\n", str5);
	return ;

}
