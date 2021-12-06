/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:54:20 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/24 13:28:51 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
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

}
