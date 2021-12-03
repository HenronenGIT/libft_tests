/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:17:32 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/19 11:35:14 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	fd;

	fd = open("test", O_WRONLY | O_CREAT);
	if (fd == -1)
	{
		printf("open() error!\n");
		return (0);
	}
	ft_putendl_fd("Hello world!", fd);
}
