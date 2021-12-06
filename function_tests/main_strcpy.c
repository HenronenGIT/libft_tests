/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:44:44 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/15 12:04:07 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*src1;	
	const char	*src2;
	const char	*src3;	
	const char	*src4;
	char		dest1[20];
	char		dest2[20];
	char		dest3[20];
	char		dest4[20];

	src1 = "Hello world!";
	src2 = " ";
	src3 = "";
	src4 = "Hello";

	printf("|%s|\n", strcpy(dest1, src1));
	printf("|%s|\n\n",ft_strcpy(dest1, src1));

	printf("|%s|\n", strcpy(dest2, src2));
	printf("|%s|\n\n",ft_strcpy(dest2, src2));

	printf("|%s|\n", strcpy(dest3, src3));
	printf("|%s|\n\n",ft_strcpy(dest3, src3));

	printf("|%s|\n", strcpy(dest4, src4));
	printf("|%s|\n\n",ft_strcpy(dest4, src4));


	return (0);
}
