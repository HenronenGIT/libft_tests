/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:38:12 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/17 13:29:03 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{

	const char	s[50] = "Hellob world";
	const char s2[50] = "Hello\0wor\0ld";	

	printf("\n%s\n",(strchr(s, 'b')));
	printf("%s\n\n",ft_strchr(s, 'b'));

	printf("%s\n",(strchr(s, 'c')));
	printf("%s\n\n",(ft_strchr(s, 'c')));

	printf("|%s|\n",(strchr(s2, '\0')));
	printf("|%s|\n\n",(ft_strchr(s2, '\0')));

}
