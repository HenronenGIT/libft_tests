/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:07:59 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/11 10:32:39 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	size_t	size;
	void	*ret;
	size_t	i;

	i = 0;
	size = 5;//test with -1, so NULL return works!
	ret = ft_memalloc(size);
	while (i != size)//test going over the size
	{
		printf("%d\n", ((char *)ret)[i]);	
		i++;
	}
	return (0);
}
