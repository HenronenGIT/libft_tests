/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:42:03 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/15 17:18:43 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char		dest1[20] = "0123456789";
	char		dest2[20] = "0123456789";
	char		dest3[20] = "0123456789";
	char		dest4[20] = "0123456789";
	char		dest5[20] = "0123456789";
	char		dest6[20] = "0123456789";
	char		dest7[20] = "0123456789";
	char		dest8[20] = "0123456789";
	const char	*src;
	const char *src2;

	src = "abcdefgh";
	src2 = "";

	printf("%s\n",strncpy(dest1, src, 10));
	printf("%s\n\n",ft_strncpy(dest2, src, 10));

	printf("%s\n",strncpy(dest3, src, 0));
	printf("%s\n\n",ft_strncpy(dest4, src, 0));

	printf("%s\n",strncpy(dest5, src, 5));
	printf("%s\n\n",ft_strncpy(dest6, src, 5));

	printf("%s\n",strncpy(dest7, src2, 13));
	printf("%s\n\n",ft_strncpy(dest8, src2, 13));







}
