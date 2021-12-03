/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:24:24 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/18 10:45:05 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{

	const char	*str1;
	const char	*str2;
	str1 = NULL;
	str2 = NULL;

	printf("%d\n\n", ft_strequ(str1, str2));
	printf("%d\n\n", ft_strequ("abcd", "abcd"));
	printf("%d\n\n", ft_strequ("abCd", "abcd"));
	printf("%d\n\n", ft_strequ("", ""));
	printf("%d\n\n", ft_strequ("c", "C"));
	printf("%d\n\n", ft_strequ("abCd", "abcd"));
}
