/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:03:58 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/29 15:04:37 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include "colors.h"

/* test file for functions:
 *	strlen
 *	isalpha
 *	isdigit
 *	isalnum
 *	isascii
 *	isprint
 */	


 * isprint */

void	test_1()
{
	/* ft_strlen */
	char	str[] = "Hello";
	char	str1[] = "";
	char	str2[] = "Hello world!";
	size_t	len;


	printf("%sFT_STRLEN TESTS\n", GREEN);
	printf(RESET);
	
	printf("Real deal: %zu\n",(len = strlen(str)));
	printf("FT: %zu\n",(len = ft_strlen(str)));

	printf("Real deal: %zu\n",(len = strlen(str1)));
	printf("FT: %zu\n",(len = ft_strlen(str1)));

	printf("Real deal: %zu\n",(len = strlen(str2)));
	printf("FT: %zu\n",(len = ft_strlen(str2)));

	printf("Real deal: %zu\n",(len = strlen(str)));
	printf("FT: %zu\n",(len = ft_strlen(str)));

	/* ft_isalpha tests */
	printf("%sIS_ALPHA TESTS\n", GREEN);
	printf(RESET);

	printf("%d\n",isalpha('@'));
	printf("%d\n\n", ft_isalpha('@'));

	printf("%d\n", isalpha('Z'));
	printf("%d\n\n", ft_isalpha('Z'));

	printf("%d\n\n", isalpha('a'));
	printf("%d\n\n", ft_isalpha('a'));

	printf("%d\n", isalpha(')'));
	printf("%d\n\n", ft_isalpha(')'));

	/* ft_isdigit tests */
	int c;
	printf("%sFT_ISDIGIT TESTS\n", GREEN);
	printf(RESET);
	c = '0';
	printf("%d\n",(isdigit(c)));
	printf("%d\n\n",(ft_isdigit(c)));
	c = -1;
	printf("%d\n",(isdigit(c)));
	printf("%d\n\n",(ft_isdigit(c)));
	c = '9';
	printf("%d\n",(isdigit(c)));
	printf("%d\n\n",(ft_isdigit(c)));
	c = 'a';
	printf("%d\n",(isdigit(c)));
	printf("%d\n\n",(ft_isdigit(c)));

	/* isalnum tests */
	printf("%sFT_ISALNUM TESTS\n", GREEN);
	printf(RESET);
	printf("%d\n", isalnum('0'));
	printf("%d\n\n", ft_isalnum('0'));

	printf("%d\n", isalnum('1'));
	printf("%d\n\n", ft_isalnum('1'));

	printf("%d\n", isalnum('*'));
	printf("%d\n\n", ft_isalnum('*'));

	printf("%d\n", isalnum('a'));
	printf("%d\n\n", ft_isalnum('a'));

	/*isascii tests*/ 
	printf("%sFT_ISASCII TESTS\n", GREEN);
	printf(RESET);
	printf("%d\n", isascii('\t'));
	printf("%d\n\n", ft_isascii('\t'));

	printf("%d\n", isascii('#'));
	printf("%d\n\n", ft_isascii('#'));
	
	/* isprintf */
	printf("%sFT_ISPRINT TESTS\n", GREEN);
	printf(RESET);

	printf("%d\n", isprint(' '));
	printf("%d\n\n", ft_isprint(' '));

	printf("%d\n", isprint('\n'));
	printf("%d\n\n", ft_isprint('\n'));
}
