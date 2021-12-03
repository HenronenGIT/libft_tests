/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:28:29 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/11 17:17:44 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	main(void)
{
	//char		dst[50] = "";
	char		*dst;
	const char	*src;
	size_t		n;
	
	dst = NULL;
	n = 5;
	src = NULL;

	memcpy((void *)0, (void *)0, n);
	ft_putstr("Before memcpyi\n");
	//ft_putstr((char *)src);
	ft_putchar('\n');
	ft_memcpy((void *)0, (void *)0, n);
	//ft_memcpy((void *)&dst[5], (void *)&dst[3], n);
	ft_putstr("After memcpy\n");
	//ft_putstr((char *)src);
	ft_putchar('\n');	
}
