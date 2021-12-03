/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:45:09 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 15:57:48 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;

	c = '4';
	ft_putnbr(isascii(c));
	ft_putchar('\n');
	ft_putnbr(ft_isascii(c));
	ft_putchar('\n');
}
