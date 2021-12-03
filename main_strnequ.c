/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:24:45 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/18 10:43:52 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*str1;
	const char	*str2;

	str1 = NULL;
	str2 = NULL;
	printf("Expected |1|\n|%d|\n\n",ft_strnequ("abcd", "abcd", 4));
	printf("Expected |1|\n%d\n\n",ft_strnequ("abcd", "abCd", 0));
	printf("Expected |1|\n%d\n\n",ft_strnequ("abcd", "aBcd", 1));
	printf("Expected |1|\n%d\n\n",ft_strnequ("abcd", "abCd", 2));
	printf("Expected |1|\n%d\n\n",ft_strnequ("", "", 2));
	printf("Expected |0|\n%d\n\n",ft_strnequ("Abcd", "abCd", 2));
	printf("Expected |1|\n%d\n\n",ft_strnequ(str1, str2, 2));

}
