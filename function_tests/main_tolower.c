/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:07:21 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/10 15:39:28 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;
	int	ret;

	c = 'A';
	ret = tolower(c);
	ft_putchar((unsigned char)ret);
	ft_putchar('\n');
	ret = ft_tolower(c);
	ft_putchar((unsigned char)ret);
	ft_putchar('\n');
	c = 'a';
	ret = tolower(c);
	ft_putchar((unsigned char)ret);
	ft_putchar('\n');
	ret = ft_tolower(c);
	ft_putchar((unsigned char)ret);
	ft_putchar('\n');
	c = '4';
	ret = tolower(c);
	ft_putchar((unsigned char)ret);
	ft_putchar('\n');
	ret = ft_tolower(c);
	ft_putchar((unsigned char)ret);
	ft_putchar('\n');
	c = '#';
	ret = tolower(c);
	ft_putchar((unsigned char)ret);
	ft_putchar('\n');
	ret = ft_tolower(c);
	ft_putchar((unsigned char)ret);
	ft_putchar('\n');
	c = 'Z';
	ret = tolower(c);
	ft_putchar((unsigned char)ret);
	ft_putchar('\n');
	ret = ft_tolower(c);
	ft_putchar((unsigned char)ret);
	ft_putchar('\n');
}

