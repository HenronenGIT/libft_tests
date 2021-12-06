/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:37:19 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/22 12:43:07 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("|%s|\n\n",ft_strtrim(" \t,\n Helloworld \t,\n "));
	printf("|%s|\n\n",ft_strtrim("Helloworld \t \n "));
	printf("|%s|\n\n",ft_strtrim("Helloworld"));
	printf("|%s|\n\n",ft_strtrim("He ll\nowo\trl,d"));
	printf("|%s|\n\n",ft_strtrim("         "));
}
