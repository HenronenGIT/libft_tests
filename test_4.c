/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:46:18 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/30 14:06:01 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "colors.h"
#include <stdio.h>
#include <ctype.h>

/*	Test file for functions:
 *	strlcat
 *	strdup
 *	atoi
 *	memccpy
 *	strnstr
 *	strncmp
 *	strncpy
 *	strncat
 */

void	test_4()
{
	/*	strlcat	*/
	printf("%sFT_STRLCAT TESTS\n", GREEN);
	printf(RESET);
	const char	*src;
	const char *src2;
	char		dst[12] = "a";
	char		dst2[12] = "a";
	char		dst3[50] = "Hello";
	char		dst4[50] = "Hello";
	char		dst5[15] = "a";
	char		dst6[15] = "a";
	src = "lorem";
	src2 = "lorem ipsum dolor sit amet";

	printf("%lu\n",strlcat(dst, src,  10));
	printf("|%s|\n", dst);
	printf("%lu\n",ft_strlcat(dst2, src, 10));
	printf("|%s|\n\n", dst);

	printf("%lu\n",strlcat(dst3, src, 15));
	printf("|%s|\n", dst);
	printf("%lu\n",ft_strlcat(dst4, src, 15));
	printf("|%s|\n\n", dst);

	printf("%lu\n",strlcat(dst5, src2, 15));
	printf("|%s|\n", dst);
	printf("%lu\n",ft_strlcat(dst6, src2, 15));
	printf("|%s|\n\n", dst);

	/*	strdup	*/
	printf("%sFT_STRDUP TESTS\n", GREEN);
	printf(RESET);
	const char	*str;
	const char	*str2;

	str = "Hello world";
	str2 = "";

	printf("%s\n", strdup(str));
	printf("%s\n\n", ft_strdup(str));

	printf("|%s|\n", strdup(str2));
	printf("|%s|\n", ft_strdup(str2));

	/*	atoi	*/
	printf("%sFT_ATOI TESTS\n", GREEN);
	printf(RESET);

	printf("%d\n", atoi("1"));
	printf("%d\n\n", ft_atoi("1"));
	printf("%d\n", atoi("+1"));
	printf("%d\n\n",ft_atoi("+1"));
	printf("%d\n", atoi("-1"));
	printf("%d\n\n", ft_atoi("-1"));
	printf("%d\n",atoi("1002"));
	printf("%d\n\n",ft_atoi("1002"));
	printf("%d\n",atoi("-1002"));
	printf("%d\n\n",ft_atoi("-1002"));
	printf("%d\n",atoi("1020304050"));
	printf("%d\n\n",ft_atoi("1020304050"));
	printf("%d\n",atoi("2147483647"));
	printf("%d\n\n",ft_atoi("2147483647"));
	printf("%d\n",atoi("2147483648"));
	printf("%d\n\n",ft_atoi("2147483648"));
	printf("%d\n",atoi("-2147483648"));
	printf("%d\n\n",ft_atoi("-2147483648"));
	printf("%d\n",atoi(""));
	printf("%d\n\n",ft_atoi(""));
	printf("%d\n",atoi("   "));
	printf("%d\n\n",ft_atoi("   "));
	printf("%d\n",atoi("10-22"));
	printf("%d\n\n",ft_atoi("10-22"));
	printf("%d\n",atoi("69p0"));
	printf("%d\n\n",ft_atoi("69p0"));
	printf("%d\n",atoi("+-12"));
	printf("%d\n\n",ft_atoi("+-12"));
	printf("%d\n",atoi("-+12"));
	printf("%d\n\n",ft_atoi("-+12"));
	printf("%d\n",atoi("++12"));
	printf("%d\n\n",ft_atoi("++12"));
	printf("%d\n",atoi("--12"));
	printf("%d\n\n",ft_atoi("--12"));
	printf("%d\n",atoi("a"));
	printf("%d\n\n",ft_atoi("a"));
	printf("%d\n",atoi("aaa"));
	printf("%d\n\n",ft_atoi("aaa"));
	printf("%d\n",atoi("++++++42"));
	printf("%d\n\n",ft_atoi("++++++42"));
	printf("%d\n",atoi("aaa"));
	printf("%d\n\n",ft_atoi("aaa"));
	printf("%d\n",atoi("       ++++42"));
	printf("%d\n\n",ft_atoi("       ++++42"));
	printf("%d\n", atoi("\n\n\n  -46\b9 \n5d6"));
	printf("%d\n\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));

	/*	memccpy	*/
	printf("%sFT_MEMCCPY TESTS\n", GREEN);
	printf(RESET);

	const char	*src3;
	char		d1[22] = "jjjjjjjjjjjjjjjjjj";
	char		d2[22] = "jjjjjjjjjjjjjjjjjj";
	char		d3[22] = "jjjjjjjjjjjjjjjjjj";
	char		d4[22] = "jjjjjjjjjjjjjjjjjj";
	char		d5[22] = "jjjjjjjjjjjjjjjjjj";
	char		d6[22] = "jjjjjjjjjjjjjjjjjj";

	src3 = "zyxwvutsrqponmlkjihgfedcba";

	printf("%s\n",memccpy(d1, src3, 'r', 20));
	printf("%s\n\n",ft_memccpy(d2, src3, 'r', 20));

	printf("%s\n", memccpy(d3, src3, 'r', 2));
	printf("%s\n\n", ft_memccpy(d4, src3, 'r', 2));

	printf("%s\n",memccpy(d5, src3, 'r', 0));
	printf("%s\n\n",ft_memccpy(d6, src3, 'r', 0));

	/*	strnstr	*/
	printf("%sFT_STRNSTR TESTS\n", GREEN);
	printf(RESET);
	const char	*s1;
	const char	*s2;
	const char	*s3;
	const char	*s4;
	const char	*s5;
	const char	*s6;
	const char	*s7;
	const char	*s8;

	s1 = "There is needle in a haystack!";
	s2 = "needle";
	s3 = "";
	s4 = "needle";
	s5 = "There is needle in a haystack!";
	s6 = "";
	s7 = "There is needle in a neede stack - needle";
	s8 = "needle";

	printf("\n%s\n", strnstr("There is needle in a haystack", "needle", 20));
	printf("%s\n\n", ft_strnstr("There is needle in a haystack", "needle", 20));

	printf("%s\n", strnstr(s3, s4, 3));
	printf("%s\n\n", ft_strnstr(s3, s4, 3));

	printf("%s\n", strnstr(s5, s6, 3));
	printf("%s\n\n", ft_strnstr(s5, s6, 3));

	printf("%s\n", strnstr(s7, s8, 3));
	printf("%s\n\n", ft_strnstr(s7, s8, 3));

	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("%s\n\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));

	printf("|%s|\n", strnstr("", "", 0));
	printf("|%s|\n\n", ft_strnstr("", "", 0));

	printf("|%s|\n", strnstr("AAAA", "AAAA", 4));
	printf("|%s|\n\n", ft_strnstr("AAAA", "AAAA", 4));	

	/*	strncmp	*/	
	printf("%sFT_STRNCMP\n", GREEN);
	printf(RESET);
	const char	*s9;
	const char	*s10;

	s9 = "Compare these strings!";
	s10 = "Compare thase strings!";
	printf("%d\n",strncmp(s9, s10, 11));
	printf("%d\n\n",(ft_strncmp(s9, s10, 11)));

	printf("%d\n",(strncmp("abcd", "abce", 4)));
	printf("%d\n\n",(ft_strncmp("abcd", "abce", 4)));

	printf("%d\n",(strncmp(s9, s10, 1000)));
	printf("%d\n\n",(ft_strncmp(s9, s10, 1000)));

	printf("%d\n",(strncmp("a", "z", 0)));
	printf("%d\n\n",(ft_strncmp("a", "z", 0)));

	printf("%d\n",(strncmp("abcdefgh", "abcdwxyz", 4)));
	printf("%d\n\n",(ft_strncmp("abcdefgh", "abcdwxyz", 4)));

	/*	strncpy	*/
	printf("%sFT_STRNCPY\n", GREEN);
	printf(RESET);
	char		de1[20] = "0123456789";
	char		de2[20] = "0123456789";
	char		de3[20] = "0123456789";
	char		de4[20] = "0123456789";
	char		de5[20] = "0123456789";
	char		de6[20] = "0123456789";
	char		de7[20] = "0123456789";
	char		de8[20] = "0123456789";

	printf("%s\n",strncpy(de1, "abcdefgh", 10));
	printf("%s\n\n",ft_strncpy(de2, "abcdefgh", 10));

	printf("%s\n",strncpy(de3, "abcdefgh", 0));
	printf("%s\n\n",ft_strncpy(de4, "abcdefgh", 0));

	printf("%s\n",strncpy(de5, "abcdefgh", 5));
	printf("%s\n\n",ft_strncpy(de6, "abcdefgh", 5));

	printf("|%s|\n",strncpy(de7, "", 13));
	printf("|%s|\n\n",ft_strncpy(de8, "", 13));

	/*	strncat	*/
	printf("%sFT_STRNCAT\n", GREEN);
	printf(RESET);


	src2 = "lorem ipsum";
	char		dest1[50] = "Hello ";
	char		dest2[50] = "Hello ";
	printf("|%s|\n",strncat(dest1, "", 3));
	printf("|%s|\n\n",ft_strncat(dest2, "", 3));

	//char		dest3[20];
	//char		dest4[20];
	//const char	*src4;
	//printf("|%s|\n",strncat(dest3, src4, 0));
	//printf("|%s|\n\n",ft_strncat(dest4, src4, 0));

	char	dest5[15] = "a";
	char	dest6[15] = "a";
	printf("|%s|\n",strncat(dest5, "lorem", 10));
	printf("|%s|\n\n",ft_strncat(dest6, "lorem", 10));

	printf("|%s|\n",strncat(dest5, "", 15));
	printf("|%s|\n\n",ft_strncat(dest5, "", 15));

}
