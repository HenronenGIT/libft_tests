/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:20:58 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/19 10:53:38 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	fd;

	fd = open("test", O_WRONLY);
	if (fd == -1)
	{
		printf("open() error!\n");
		return (0);
	}
	ft_putchar_fd('H', fd);
}
