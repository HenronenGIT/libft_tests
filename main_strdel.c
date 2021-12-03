/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:14:46 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/23 12:27:33 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*ret;
	char	*ret2;

	ret2 = NULL;
	ret = ft_strnew(5);
	ft_strdel(&ret);
	if (!ret)
		printf("PASS");
	else
		printf("FAIL");
	ft_strdel(&ret2);
}
