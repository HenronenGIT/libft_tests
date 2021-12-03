/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:19:44 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/29 13:11:55 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[] = "Hello";
	char	str1[] = "";
	char	str2[] = "Hello world!";
	size_t	len;
	
	printf("Real deal: %d\n",(len = strlen(str)));
	printf("FT: %d\n",(len = ft_strlen(str)));

	printf("Real deal: %d\n",(len = strlen(str1)));
	printf("FT: %d\n",(len = ft_strlen(str1)));

	printf("Real deal: %d\n",(len = strlen(str2)));
	printf("FT: %d\n",(len = ft_strlen(str2)));

	printf("Real deal: %d\n",(len = strlen(str)));
	printf("FT: %d\n",(len = ft_strlen(str)));

}
