/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:46:25 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/25 18:10:30 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char		dst1[50] = "0123456789";
	char		dst2[50] = "0123456789";
	char		dst3[50] = "0123456789";
	char		dst4[50] = "0123456789";
	char		dst5[50] = "0123456789";
	char		dst6[50] = "0123456789";
	char		dst7[50] = "0123456789";
	const char	*src;

	src = "012345";
				
	printf("%s\n",memmove(dst1, src, 5));
	printf("%s\n\n",ft_memmove(dst2, src, 5));

	printf("%s\n",memmove(dst3, src, 0));
	printf("%s\n\n",ft_memmove(dst4, src, 0));

	printf("%s\n",memmove(dst4, src, 5));
	printf("%s\n\n",ft_memmove(dst5, src, 5));

	//Same dst and src
	memmove(&dst6[5], &dst6[3], 5);
	printf("|%s|\n", dst6);
	ft_memmove(&dst7[5], &dst7[3], 5);
	printf("|%s|\n\n", dst7);

	printf("%s\n",memmove(((void *)0), ((void *)0), 5));
	printf("%s\n\n",ft_memmove(((void *)0), ((void *)0), 5));
}

