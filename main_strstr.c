/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:50:46 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/19 17:40:24 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*s1;
	const char	*s2;

	s1 = "There is needle in a haystack!";
	s2 = "needle";
	printf("\n%s\n",strstr(s1, s2));
	printf("%s\n\n",ft_strstr(s1, s2));

	s1 = "";
	s2 = "needle";
	printf("|%s|\n",strstr(s1, s2));
	printf("|%s|\n\n",ft_strstr(s1, s2));

	s1 = "There is needle in a haystack!";
	s2 = "";
	printf("%s\n",strstr(s1, s2));
	printf("%s\n\n",ft_strstr(s1, s2));

	s1 = "lorem ipsum dolor sit amet";
	s2 = "ipsumm";
	printf("%s\n",strstr(s1, s2));
	printf("%s\n\n",ft_strstr(s1, s2));

	s1 = "lorem ipsum dolor sit amet";
	s2 = "consectetur";
	printf("%s\n",strstr(s1, s2));
	printf("%s\n\n",ft_strstr(s1, s2));

	s1 = "MZIRIBMZIRIBMZP";
	s2 = "MZIRIBMZP";
	printf("%s\n",strstr(s1, s2));
	printf("%s\n\n",ft_strstr(s1, s2));
}
