/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:58:11 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/17 13:15:17 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;

	c = ' ';
	ft_putnbr(isprint(c));
	ft_putchar('\n');
	c = ')';
	ft_putnbr(isprint(c));
	ft_putchar('\n');
}
