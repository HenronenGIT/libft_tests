/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:37:15 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/17 14:28:25 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	s1[] = "This is ab worbld!";

	printf("\n%s\n",strrchr(s1, 'b'));
	printf("%s\n\n",ft_strrchr(s1, 'b'));

	printf("|%s|\n",strrchr("hel\0lo", '\0'));
	printf("|%s|\n\n",ft_strrchr("hel\0lo", '\0'));

	printf("|%s|\n",strrchr("", '\0'));
	printf("|%s|\n\n",ft_strrchr("", '\0'));

	printf("|%s|\n",strrchr("hello", 'h'));
	printf("|%s|\n\n",ft_strrchr("hello", 'h'));
}
