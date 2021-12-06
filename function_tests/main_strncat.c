/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:10:56 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/17 15:32:23 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*src;
	const char	*src2;
	
	src = "";
	src2 = "lorem ipsum";
	char		dest1[50] = "Hello ";
	char		dest2[50] = "Hello ";
	printf("|%s|\n",strncat(dest1, src, 3));
	printf("|%s|\n\n",ft_strncat(dest2, src, 3));

	char		dest3[20];
	char		dest4[20];
	printf("|%s|\n",strncat(dest3, src2, 0));
	printf("|%s|\n\n",ft_strncat(dest4, src2, 0));
	
	char	dest5[15] = "a";
	char	dest6[15] = "a";
	printf("|%s|\n",strncat(dest5, "lorem", 10));
	printf("|%s|\n\n",ft_strncat(dest6, "lorem", 10));

	printf("|%s|\n",strncat(dest5, "", 15));
	printf("|%s|\n\n",ft_strncat(dest5, "", 15));
}
