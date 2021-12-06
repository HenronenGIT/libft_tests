/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:42:55 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/17 13:50:41 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*s1;
	const char	*s2;

	s1 = "Compare these strings!";
	s2 = "Compare thase strings!";
	printf("%d\n",strncmp(s1, s2, 11));
	printf("%d\n\n",(ft_strncmp(s1, s2, 11)));

	printf("%d\n",(strncmp("abcd", "abce", 4)));
	printf("%d\n\n",(ft_strncmp("abcd", "abce", 4)));

	printf("%d\n",(strncmp(s1, s2, 1000)));
	printf("%d\n\n",(ft_strncmp(s1, s2, 1000)));

	printf("%d\n",(strncmp("a", "z", 0)));
	printf("%d\n\n",(ft_strncmp("a", "z", 0)));

	printf("%d\n",(strncmp("abcdefgh", "abcdwxyz", 4)));
	printf("%d\n\n",(ft_strncmp("abcdefgh", "abcdwxyz", 4)));
}
