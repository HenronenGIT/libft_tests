/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:04:14 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/25 17:11:10 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("%s\n", ft_itoa(4));
	printf("%s\n", ft_itoa(10));
	printf("%s\n", ft_itoa(123456789));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-4444));
	printf("%s\n", ft_itoa(-9));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa('\0'));
}
