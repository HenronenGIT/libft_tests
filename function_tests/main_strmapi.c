/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:46:05 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/23 12:46:26 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_lcase_mapi(unsigned int n, char c);

int	main(void)
{
	char (*f)(unsigned int, char);
	char	*s;
	char	*s2;

	s = "HELLO woRLD!";
	s2 = NULL;
	f = &ft_lcase_mapi;

	printf("%s\n",ft_strmapi(s, f));
	ft_strmapi(s2, f);
}

char	ft_lcase_mapi(unsigned int n, char c)
{
	n = 0;
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
