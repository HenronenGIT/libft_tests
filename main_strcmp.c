/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:13:57 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/15 11:40:13 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
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

	//printf("%d\n",strcmp("", "test"));
	//printf("%d\n\n",ft_strcmp("", "test"));

}
