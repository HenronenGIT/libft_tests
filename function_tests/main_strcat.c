/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:18:01 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 14:23:05 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	src[50] = "World!";
	char		dest2[50] = "Hello ";
	char		dest1[50] = "Hello ";

	ft_putstr(strcat(dest1, src));
	ft_putchar('\n');
	ft_putstr(ft_strcat(dest2, src));
	ft_putchar('\n');
}
