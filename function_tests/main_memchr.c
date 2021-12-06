/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:16:48 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/11 17:37:50 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	main(void)
{
	const char	*s;
	int			c;
	size_t		n;
	char		*ret;

	s = "Hello world!";
	c = 'e';
	n = 0;
	ret = memchr(s, c, n);
	printf("%s\n", ret);
	ret = ft_memchr(s, c, n);
	printf("%s\n", ret);
}
