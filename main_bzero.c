/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:47:13 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/10 10:22:27 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	s[50] = "Hello world";
	size_t	n;
	
	n = 5;
	//ft_putstr(s);
	//ft_putchar('\n');
	//bzero(s, n);
	//ft_putstr(s);
	//ft_putchar('\n');

	ft_putstr(s);
	ft_putchar('\n');
	ft_bzero(s, n);	
	ft_putstr(s);
	ft_putchar('\n');
	ft_putstr(&s[5]);
}
