/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:54:52 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/23 12:35:49 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lcase(char *s);

int	main(void)
{
	const char	*str;
	char	s[50];
	void	(*f)(char *);
	void	(*f2);
	char	*str2 = NULL;

	//Making string what needs to be iterated
	str = "HELLO WorLd!";
	ft_strcpy(s, str);

	f = &ft_lcase;
	//Normal test.
	printf("s, before ft_striter()\n%s\n\n", s);
	ft_striter(s,f);
	printf("s, after ft_striter()\n%s\n\n", s);
	//Poiners are null test.
	f2 = NULL;
	ft_striter(str2,f2);
}

void	ft_lcase(char *s)
{
	if (*s >= 'A' && *s <= 'Z')
	{
		*s = *s + 32;
	}
}
