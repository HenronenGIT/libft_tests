/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:28:33 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/12 14:32:49 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;

	c = '0';
	printf("%d\n",(isdigit(c)));
	printf("%d\n\n",(ft_isdigit(c)));
	c = -1;
	printf("%d\n",(isdigit(c)));
	printf("%d\n\n",(ft_isdigit(c)));
	c = '9';
	printf("%d\n",(isdigit(c)));
	printf("%d\n\n",(ft_isdigit(c)));
	c = 'a';
	printf("%d\n",(isdigit(c)));
	printf("%d\n\n",(ft_isdigit(c)));

}
