/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:56:12 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 15:28:26 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c, d, e, f, g;

	c = '@';
	d = 'Z';
	e = 'a';
	f = 'z';
	g = ')';

	ft_putnbr(isalpha(c));
	ft_putchar('\n');
	ft_putnbr(ft_isalpha(c));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putnbr(isalpha(d));
	ft_putchar('\n');
	ft_putnbr(ft_isalpha(d));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putnbr(isalpha(e));
	ft_putchar('\n');
	ft_putnbr(ft_isalpha(e));
	ft_putchar('\n');
	ft_putchar('\n');

	ft_putnbr(isalpha(f));
	ft_putchar('\n');
	ft_putnbr(ft_isalpha(f));
	ft_putchar('\n');
}
