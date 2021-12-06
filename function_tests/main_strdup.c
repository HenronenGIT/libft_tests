/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:24:53 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 13:32:23 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*str;
	const char	*str2;

	char	*new_str;
	char	*new_str2;
	char	*new_str3;
	char	*new_str4;
	//char	*new_str5;
	//char	*new_str6;
	

	str = "Hello world";
	str2 = "";

	ft_putstr("Real deal: ");
	ft_putstr(new_str = strdup(str));
	ft_putchar('\n');
	ft_putstr("FT version: ");
	ft_putstr(new_str2 = ft_strdup(str));
	ft_putchar('\n');

	ft_putstr("Real deal: ");
	ft_putstr(new_str3 = strdup(str2));
	ft_putchar('\n');
	ft_putstr("FT version: ");
	ft_putstr(new_str4 = ft_strdup(str2));
	ft_putchar('\n');

	//ft_putstr("Real deal: ");
	//ft_putstr(new_str5 = strdup(str));
	//ft_putchar('\n');
	//ft_putstr("FT version: ");
	//ft_putstr(new_str6 = ft_strdup(str));
	//ft_putchar('\n');
}
