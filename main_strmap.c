/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:10:23 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/18 17:29:22 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	ft_lcase_map(char c);

int	main(void)
{
	char (*f)(char);
	char	*s;
	char	*s2;
	char	*s3;
	
	s = "HELLO woRLD!";
	s2 = NULL;
	s3 = "hello world!";
	f = &ft_lcase_map;

	printf("%s\n",ft_strmap(s, f));
	printf("%s\n",ft_strmap(s3, f));

	ft_strmap(s2, f);
}

char	ft_lcase_map(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
