/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:57:55 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/30 17:37:39 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "colors.h"
#include <stdio.h>
#include <ctype.h>

/*	Test file for functions:
 *	memdel
 *	striter
 *	striteri
 *	strmap
 *	strmapi
 *	strtrim
 *	strsplit
 *	itoa
 */

static char	ft_lcase_map(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

char	ft_lcase_mapi(unsigned int n, char c)
{
	n = 0;
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

static void	ft_lcasei(unsigned int i , char *s)
{
	i = 0;
	if (*s >= 'A' && *s <= 'Z')
	{
		*s = *s + 32;
	}
}

void	test_6()
{
	printf("%sFT_MEMDEL TESTS\n", GREEN);
	printf(RESET);
	void	*ret;
	size_t	i;

	i = 0;
	ret = ft_memalloc(5);
	printf("%sSent pointer address and content:\n", GREEN);
	printf(RESET);
	printf("%p\n", &ret);
	while (i != 5)
	{
		printf("%d", ((char *)ret)[i]);
		i++;
	}
	printf("\n");
	ft_memdel(&ret);
	printf("%sReturned ptr address and content:\n", GREEN);
	printf(RESET);
	printf("%s\n",(char *)ret);
	printf("%p\n\n", &ret);

	/*	striter	*/
	printf("%sFT_STRITER TESTS\n", GREEN);
	printf(RESET);

	const char	*str;
	char	s[50];
	void	(*f)(char *);
	void	(*f2);

	/*Making string what needs to be iterated*/
	str = "HELLO WorLd!";
	ft_strcpy(s, str);

	f = &ft_lcase;
	/*Normal test.*/
	printf("%sString, before ft_striter()\n", GREEN);
	printf(RESET);
	printf("%s\n\n", s);
	ft_striter(s,f);
	printf("%sString, after ft_striter()", GREEN);
	printf(RESET);
	printf("\n%s\n\n", s);
	/*Poiners are null test.*/
	printf("%sSending NULL pointer\n", GREEN);
	printf(RESET);
	f2 = NULL;
	ft_striter(NULL,f2);
	printf("\n");

	/*	striteri	*/
	printf("%sFT_STRITER(I) TESTS\n", GREEN);
	printf(RESET);
	char		s3[] = "HELLO WORLD";
	void		(*f3)(unsigned int, char *);

	f3 = &ft_lcasei;

	printf("%sString, before ft_striter(I)()\n", GREEN);
	printf(RESET);
	printf("%s\n", s3);
	printf("%sString, after ft_striter(I)()\n", GREEN);
	printf(RESET);
	ft_striteri(s3, f3);
	printf("%s\n", s3);
	printf("%sSending NULL pointers\n", GREEN);
	printf(RESET);
	ft_striteri(NULL,NULL);
	printf("\n");

	/*	strmap	*/
	printf("%sFT_STRMAP TESTS\n", GREEN);
	printf(RESET);

	char (*f4)(char);
	char	*s1;
	char	*s2;

	s1 = "HELLO woRLD!";
	s2 = NULL;
	f4 = &ft_lcase_map;

	printf("Before strmap():\nHELLO woRLD!\n");
	printf("After strmap():\n%s\n\n", ft_strmap(s1, f4));

	printf("Sending NULL:\n%s\n", ft_strmap(s2, f4));
	printf("\n");

	/*	strmapi	*/
	printf("%sFT_STRMAP(I) TESTS\n", GREEN);
	printf(RESET);
	char (*f5)(unsigned int, char);
	char	*str1;
	char	*str2;

	str1 = "HELLO woRLD!";
	str2 = NULL;
	f5 = &ft_lcase_mapi;

	printf("Before strmap(I):\n%s\n", str1);
	printf("After strmap(I):\n%s\n\n",ft_strmapi(str1, f5));

	printf("Sending NULL pointer:\n%s\n", ft_strmapi(str2, f5));

	/*	strstrim	*/
	printf("%sFT_STRTRIM TESTS\n", GREEN);
	printf(RESET);
	const char ss1[] = " \t, Helloworld \t,      ";
	const char ss2[] = "Helloworld \t \n";
	const char ss3[] = "Helloworld";
	const char ss4[] = "He ll\nowo\trl,d";
	const char ss5[] = "         ";
	printf("Before ft_strtrim():\n|%s|\n", ss1);
	printf("After ft_strtrim():\n|%s|\n\n", ft_strtrim(ss1));

	printf("Before ft_strtrim():\n|%s|\n", ss2);
	printf("After ft_strtrim():\n|%s|\n\n", ft_strtrim(ss2));

	printf("Before ft_strtrim():\n|%s|\n", ss3);
	printf("After ft_strtrim():\n|%s|\n\n", ft_strtrim(ss3));

	printf("Before ft_strtrim():\n|%s|\n", ss4);
	printf("After ft_strtrim():\n|%s|\n\n", ft_strtrim(ss4));

	printf("Before ft_strtrim():\n|%s|\n", ss5);
	printf("After ft_strtrim():\n|%s|\n\n", ft_strtrim(ss5));

	/*	strsplit	*/
	printf("%sFT_STRSPLIT TESTS\n", GREEN);
	printf(RESET);
	ft_putstr(RESET);

	char		c;
	i = 0;
	c = '*';
	const char	*sss1 = "*Hello*fellow***students*";
	char		**arr1;
	printf("Before strsplit():\n%s\n\n", sss1);
	arr1 = ft_strsplit(sss1, c);
	printf("After strsplit:\n");
	ft_print_array(arr1, sss1, c);

	c = '*';
	char const *sss2 = "******Hello*";
	char		**arr2;
	printf("Before strsplit():\n%s\n\n", sss2);
	arr2 = ft_strsplit(sss2, c);
	printf("After:\n");
	ft_print_array(arr2, sss2, c);

	c = ' ';
	char const *sss3 = "    Good    day    Hivers   ";
	char		**arr3;
	printf("Before strsplit():\n|%s|\n\n", sss3);
	arr3 = ft_strsplit(sss3, c);
	printf("After:\n");
	ft_print_array(arr3, sss3, c);

	c = ' ';
	char const *sss4 = "      This      is  maRVIN  !       ";
	char		**arr4;
	printf("Before strsplit():\n|%s|\n\n", sss4);
	arr4 = ft_strsplit(sss4, c);
	printf("After:\n");
	ft_print_array(arr4, sss4, c);

	/*	ft_itoa	*/
	printf("%sFT_ITOA TESTS\n", GREEN);
	printf(RESET);

	printf("%s\n", ft_itoa(4));
	printf("%s\n", ft_itoa(10));
	printf("%s\n", ft_itoa(123456789));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-4444));
	printf("%s\n", ft_itoa(-9));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa('\0'));
}
