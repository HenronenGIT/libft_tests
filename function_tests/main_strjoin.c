/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:57:11 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/18 13:36:52 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char *str1;
	const char *str2;
	
	str1 = NULL;
	str2 = NULL;
	printf("\n|%s|\n", ft_strjoin(str1, str2));
	printf("|%s|\n", ft_strjoin("Hello", "world"));
	printf("|%s|\n", ft_strjoin("", ""));
	printf("|%s|\n", ft_strjoin("Hello", ""));
	printf("|%s|\n", ft_strjoin("", "world"));

}
