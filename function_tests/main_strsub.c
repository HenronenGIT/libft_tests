/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:53:52 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/25 10:43:37 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*str1;
	str1 = NULL;

	printf("%s\n", ft_strsub(str1, 0, 10));
	printf("%s\n", ft_strsub("0123456789", 0, 10));
	printf("%s\n", ft_strsub("0123456789", 6, 10));
	printf("%s\n", ft_strsub("lorem ipsum dolor sit amet", 7, 10));
	
	/* For tests files*/
	//printf("%s\n", ft_substr(str1, 0, 10));
	//printf("%s\n", ft_substr("0123456789", 0, 10));
	//printf("%s\n", ft_substr("0123456789", 6, 10));
	//printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 7, 10));
}
