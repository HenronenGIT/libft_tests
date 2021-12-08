/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:05:46 by hmaronen          #+#    #+#             */
/*   Updated: 2021/12/01 12:24:34 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "colors.h"

void	test_1();
void	test_2();
void	test_3();
void	test_4();
void	test_5();
void	test_6();
void	test_7();

int	main(int ac, char **argv)
{
	if (ac != 2)
		return (0);
	if (*argv[1] == '1')
		test_1();
	if (*argv[1] == '2')
		test_2();
	if (*argv[1] == '3')
		test_3();
	if (*argv[1] == '4')
		test_4();
	if (*argv[1] == '5')
		test_5();
	if (*argv[1] == '6')
		test_6();
	if (*argv[1] == '7')
		test_7();
	return (0);
}
