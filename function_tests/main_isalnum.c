/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:37:46 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 15:44:39 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;

	c = '0';
	ft_putnbr(isalnum(c));
	ft_putchar('\n');
	ft_putnbr(ft_isalnum(c));
	ft_putchar('\n');
	c = '1';
	ft_putnbr(isalnum(c));
	ft_putchar('\n');
	ft_putnbr(ft_isalnum(c));
	ft_putchar('\n');
	c = '*';
	ft_putnbr(isalnum(c));
	ft_putchar('\n');
	ft_putnbr(ft_isalnum(c));
	ft_putchar('\n');
	c = 'a';
	ft_putnbr(isalnum(c));
	ft_putchar('\n');
	ft_putnbr(ft_isalnum(c));
	ft_putchar('\n');
}
