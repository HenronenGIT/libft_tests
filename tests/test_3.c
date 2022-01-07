/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:13:48 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/29 17:51:34 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include "colors.h"

/* Test file for functions:
 * memcpy
 * strcpy
 * strcat
 * strcmp
 * strstr
 * memmove
 * memcmp
 */

void	test_3()
{
    /*  ft_memcpy   */
    printf("%sFT_MEMCPY TESTS\n", GREEN);
	printf(RESET);

	printf("%s\n", memcpy((void *)0, (void *)0, 5));
	printf("%s\n\n", ft_memcpy((void *)0, (void *)0, 5));

	//printf("%s\n", memcpy("Hello world", "Hi!", 5));
	//printf("%s\n", ft_memcpy("Hello world", "Hi!", 5));
	
	/*	ft_strcpy	*/

	printf("%sFT_STRCPY TESTS\n", GREEN);
	printf(RESET);
	const char	*src1;	
	const char	*src2;
	const char	*src3;	
	const char	*src4;
	char		dest1[20];
	char		dest2[20];
	char		dest3[20];
	char		dest4[20];

	src1 = "Hello world!";
	src2 = " ";
	src3 = "";
	src4 = "Hello";
	printf("|%s|\n", strcpy(dest1, src1));
	printf("|%s|\n\n",ft_strcpy(dest1, src1));

	printf("|%s|\n", strcpy(dest2, src2));
	printf("|%s|\n\n",ft_strcpy(dest2, src2));

	printf("|%s|\n", strcpy(dest3, src3));
	printf("|%s|\n\n",ft_strcpy(dest3, src3));

	printf("|%s|\n", strcpy(dest4, src4));
	printf("|%s|\n\n",ft_strcpy(dest4, src4));

	/*	strcat	*/
	printf("%sFT_STRCAT TESTS\n", GREEN);
	printf(RESET);
	const char	src5[50] = "World!";
	char		dest5[50] = "Hello ";
	char		dest6[50] = "Hello ";

	printf("%s\n", strcat(dest5, src5));
	printf("%s\n", ft_strcat(dest6, src5));

	/*	strcmp	*/
	printf("%sFT_STRCMP TESTS\n", GREEN);
	printf(RESET);
	const char	*s1;
	const char	*s2;

	s1 = "Compare these strings!";
	s2 = "Compare thase strings!";
	printf("%d\n",strcmp(s1, s2));
	printf("%d\n\n",ft_strcmp(s1, s2));

	s1 = " ";
	s2 = " ";
	printf("%d\n",strcmp(s1, s2));
	printf("%d\n\n",ft_strcmp(s1, s2));

	s1 = "a";
	s2 = "A";
	printf("%d\n",strcmp(s1, s2));
	printf("%d\n\n",ft_strcmp(s1, s2));

	s1 = "Hello\200";
	s2 = "Hello\0";
	printf("%d\n",strcmp(s1 , s2));
	printf("%d\n\n",ft_strcmp(s1, s2));

	/*	strstr	*/
	printf("%sFT_STRSTR TESTS", GREEN);
	printf(RESET);

	printf("\n%s",strstr("There is needle in a haystack!", "needle"));
	printf("\n%s\n\n",ft_strstr("There is needle in a haystack!", "needle"));

	printf("|%s|\n",strstr("", "needle"));
	printf("|%s|\n\n",ft_strstr("", "needle"));
	
	printf("%s\n",strstr("There is needle in a haystack!", ""));
	printf("%s\n\n",ft_strstr("There is needle in a haystack!", ""));

	printf("%s\n",strstr("Hello Hivee Helsinki!", "Hivee"));
	printf("%s\n\n",ft_strstr("Hello Hivee Helsinki!", "Hivee"));

	printf("%s\n",strstr("Hive Helsinki!", "42school"));
	printf("%s\n\n",ft_strstr("Hive Helsinki!", "42school"));
	
	printf("%s\n",strstr("HIVEHELSINKHELSINKI", "HELSINKI"));
	printf("%s\n\n",ft_strstr("HIVEHELSINKHELSINKI", "HELSINKI"));

	/*	ft_memmove	*/
	printf("%sFT_MEMMOVE TESTS\n", GREEN);
	printf(RESET);

	char		dst1[50] = "0123456789";
	char		dst2[50] = "0123456789";
	char		dst3[50] = "0123456789";
	char		dst4[50] = "0123456789";
	char		dst5[50] = "0123456789";
	char		dst6[50] = "0123456789";
	char		dst7[50] = "0123456789";
	const char	*src;

	src = "012345";
				
	printf("%s\n",memmove(dst1, src, 5));
	printf("%s\n\n",ft_memmove(dst2, src, 5));

	printf("%s\n",memmove(dst3, src, 0));
	printf("%s\n\n",ft_memmove(dst4, src, 0));

	printf("%s\n",memmove(dst4, src, 5));
	printf("%s\n\n",ft_memmove(dst5, src, 5));

	//Same dst and src
	memmove(&dst6[5], &dst6[3], 5);
	printf("|%s|\n", dst6);
	ft_memmove(&dst7[5], &dst7[3], 5);
	printf("|%s|\n\n", dst7);

	printf("%s\n",memmove(((void *)0), ((void *)0), 5));
	printf("%s\n\n",ft_memmove(((void *)0), ((void *)0), 5));

	/*	ft_memcmp	*/
	printf("%sFT_MEMCMP TESTS\n", GREEN);
	printf(RESET);

	const char	*str1;
	const char	*str2;
	const char	*str3;
	const char	*str4;
	const char	*str5;
	const char	*str6;
	const char	*str7;
	const char	*str8;
	const char	*str9;
	const char	*str10;

	str1 = "Hello world";
	str2 = "Hello";
	str3 = "";
	str4 = "";
	str5 = "Hello aorld!";
	str6 = "Hello world!";
	str7 = "Hello world!";
	str8 = "";
	str9 = "Hive\0\0\0";
	str10 = "Hive\0abc";

	printf("%d\n",memcmp(str1, str2, 12));
	printf("%d\n\n",ft_memcmp(str1, str2, 12));

	printf("%d\n",memcmp(str3, str4, 12));
	printf("%d\n\n",ft_memcmp(str3, str4, 12));

	printf("%d\n",memcmp(str5, str6, 12));
	printf("%d\n\n",ft_memcmp(str5, str6, 12));

	printf("%d\n",memcmp(str7, str8, 12));
	printf("%d\n\n",ft_memcmp(str7, str8, 12));

	printf("%d\n",memcmp("abcdefgh", "abcdefghj", 7));
	printf("%d\n\n",ft_memcmp("abcdefgh", "abcdefgj", 7));

	printf("%d\n",memcmp("zbcdefgh", "abcdefghj", 0));
	printf("%d\n\n",ft_memcmp("zbcdefgh", "abcdefgj", 0));

	printf("%d\n",memcmp(str9, str10, 10));
	printf("%d\n\n",ft_memcmp(str9, str10, 10));

}