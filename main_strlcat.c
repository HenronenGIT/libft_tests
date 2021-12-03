/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:12:38 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/24 10:37:01 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*src;
	const char *src2;
	char		dst[12] = "a";
	char		dst2[12] = "a";
	char		dst3[50] = "Hello";
	char		dst4[50] = "Hello";
	char		dst5[15] = "a";
	char		dst6[15] = "a";
	src = "lorem";
	src2 = "lorem ipsum dolor sit amet";

	printf("%lu\n",strlcat(dst, src,  10));
	printf("|%s|\n", dst);
	printf("%lu\n",ft_strlcat(dst2, src, 10));
	printf("|%s|\n\n", dst);

	printf("%lu\n",strlcat(dst3, src, 15));
	printf("|%s|\n", dst);
	printf("%lu\n",ft_strlcat(dst4, src, 15));
	printf("|%s|\n\n", dst);

	printf("%lu\n",strlcat(dst5, src2, 15));
	printf("|%s|\n", dst);
	printf("%lu\n",ft_strlcat(dst6, src2, 15));
	printf("|%s|\n\n", dst);
}
