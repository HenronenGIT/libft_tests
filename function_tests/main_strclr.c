/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:44:42 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/29 15:23:07 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[] = "Hello world!";
	char	*str2;

	str2 = NULL;
	printf("|%s|\n", str);
	ft_strclr(str);
	printf("|%s|\n", str);
	ft_strclr(str2);
}
