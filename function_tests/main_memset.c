/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 08:57:49 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/11 16:39:00 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	b[50] = "Hello world" ;
	int		c;
	size_t	len;

	c = 'a';
	len = 3;
	ft_putstr((memset(b, c, len)));
	ft_putchar('\n');
	ft_putstr(ft_memset(b, c, len));
	ft_putchar('\n');
}
