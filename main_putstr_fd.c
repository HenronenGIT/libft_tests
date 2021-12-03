/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:54:01 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/19 11:16:53 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int		fd;

	fd = open("test", O_WRONLY);
	if (fd == -1)
	{
		printf("open() error!\n");
		return (0);
	}
	ft_putstr_fd("Hello world", fd);
}
