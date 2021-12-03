/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:07:29 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/16 12:19:35 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lcasei(unsigned int i , char *s);

int	main(void)
{
	char		s[] = "HELLO WORLD";
	void			(*f)(unsigned int, char *);
	char			*s2;


	s2 = NULL;
	f = &ft_lcasei;

	printf("%s\n", s);
	ft_striteri(s, f);
	printf("%s\n", s);

	ft_striteri(s2,f);
}

void	ft_lcasei(unsigned int i , char *s)
{
	i = 0;
	if (*s >= 'A' && *s <= 'Z')
	{
		*s = *s + 32;
	}
}
