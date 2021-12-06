/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:04:04 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 17:41:57 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;

	c = 'a';
	ft_putchar((toupper(c)));
	ft_putchar('\n');
	ft_putchar((ft_toupper(c)));
	ft_putchar('\n');
	c = '!';
	ft_putchar((toupper(c)));
	ft_putchar('\n');
	ft_putchar((ft_toupper(c)));
	ft_putchar('\n');
	c = '@';
	ft_putchar((toupper(c)));
	ft_putchar('\n');
	ft_putchar((ft_toupper(c)));
	ft_putchar('\n');
	c = 'C';
	ft_putchar((toupper(c)));
	ft_putchar('\n');
	ft_putchar((ft_toupper(c)));
	ft_putchar('\n');
}
