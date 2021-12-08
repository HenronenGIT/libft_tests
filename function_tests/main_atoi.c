/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:24:20 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/30 11:16:27 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", atoi("1"));
	printf("%d\n\n", ft_atoi("1"));

	printf("%d\n", atoi("+1"));
	printf("%d\n\n",ft_atoi("+1"));

	printf("%d\n", atoi("-1"));
	printf("%d\n\n", ft_atoi("-1"));

	printf("%d\n",atoi("1002"));
	printf("%d\n\n",ft_atoi("1002"));

	printf("%d\n",atoi("-1002"));
	printf("%d\n\n",ft_atoi("-1002"));

	printf("%d\n",atoi("1020304050"));
	printf("%d\n\n",ft_atoi("1020304050"));

	printf("%d\n",atoi("2147483647"));
	printf("%d\n\n",ft_atoi("2147483647"));

	printf("%d\n",atoi("2147483648"));
	printf("%d\n\n",ft_atoi("2147483648"));

	printf("%d\n",atoi("-2147483648"));
	printf("%d\n\n",ft_atoi("-2147483648"));

	printf("%d\n",atoi(""));
	printf("%d\n\n",ft_atoi(""));

	printf("%d\n",atoi("   "));
	printf("%d\n\n",ft_atoi("   "));

	printf("%d\n",atoi("10-22"));
	printf("%d\n\n",ft_atoi("10-22"));

	printf("%d\n",atoi("1-2"));
	printf("%d\n\n",ft_atoi("1-2"));

	printf("%d\n",atoi("69p0"));
	printf("%d\n\n",ft_atoi("69p0"));

	printf("%d\n",atoi("+-12"));
	printf("%d\n\n",ft_atoi("+-12"));

	printf("%d\n",atoi("-+12"));
	printf("%d\n\n",ft_atoi("-+12"));

	printf("%d\n",atoi("++12"));
	printf("%d\n\n",ft_atoi("++12"));

	printf("%d\n",atoi("--12"));
	printf("%d\n\n",ft_atoi("--12"));

	printf("%d\n",atoi("a"));
	printf("%d\n\n",ft_atoi("a"));

	printf("%d\n",atoi("aaa"));
	printf("%d\n\n",ft_atoi("aaa"));

	printf("%d\n",atoi("++++++42"));
	printf("%d\n\n",ft_atoi("++++++42"));

	printf("%d\n",atoi("aaa"));
	printf("%d\n\n",ft_atoi("aaa"));

	printf("%d\n",atoi("       ++++42"));
	printf("%d\n\n",ft_atoi("       ++++42"));
	
	printf("%d\n", atoi("\n\n\n  -46\b9 \n5d6"));
	printf("%d\n\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
}
