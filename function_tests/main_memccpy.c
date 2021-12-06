/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:04:10 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/17 12:00:16 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*src;
	char		d1[22] = "jjjjjjjjjjjjjjjjjj";
	char		d2[22] = "jjjjjjjjjjjjjjjjjj";
	char		d3[22] = "jjjjjjjjjjjjjjjjjj";
	char		d4[22] = "jjjjjjjjjjjjjjjjjj";
	char		d5[22] = "jjjjjjjjjjjjjjjjjj";
	char		d6[22] = "jjjjjjjjjjjjjjjjjj";
	const char 	*src2;

	src2 = NULL;
	src = "zyxwvutsrqponmlkjihgfedcba";
	printf("%s\n",memccpy(d1, src, 'r', 20));
	printf("%s\n\n",ft_memccpy(d2, src, 'r', 20));

	printf("%s\n", memccpy(d3, src, 'r', 2));
	printf("%s\n\n", ft_memccpy(d4, src, 'r', 2));

	printf("%s\n",memccpy(d5, src, 'r', 0));
	printf("%s\n\n",ft_memccpy(d6, src, 'r', 0));

	//printf("%s\n",memccpy(d6, src2, 'r', 20));
	//printf("%s\n\n",ft_memccpy(d6, src2, 'r', 20));
}
