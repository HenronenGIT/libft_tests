/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:15:40 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/25 14:12:49 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	size_t	size;
	char	*ret;
	size = 5;
	ret = ft_strnew(size);
	ret[5] = 'H';
	ret[6] = 'E';
	//ret[10] = 'L';
	printf("%c\n", ret[5]);
	printf("%c\n", ret[6]);
	//printf("%c\n", ret[10]);


}
