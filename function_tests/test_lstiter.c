/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:00:11 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/29 11:31:08 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_put_lststr(t_list *elem)
{
	ft_putstr(elem->content);
	ft_putchar('\n');
}

int	main(void)
{
	t_list		*list;
	t_list		*list2;
	t_list		*list3;
	t_list		*list4;

	const char	*s1;
	const char	*s2;
	const char	*s3;
	const char	*s4;
	void (*f)(t_list *elem);

	f = &ft_put_lststr;
	s1 = "First String!";
	s2 = "Second String!";
	s3 = "3rd String!";
	s4 = "4th String!";

	/* make all new nodes */
	list = ft_lstnew(s1, ft_strlen((char *)s1));
	list2 = ft_lstnew(s2, ft_strlen((char *)s2));
	list3 = ft_lstnew(s3, ft_strlen((char *)s3));
	list4 = ft_lstnew(s4, ft_strlen((char *)s4));

	/* chain nodes */
	list->next = list2;
	list2->next = list3;
	list3->next = list4;

	ft_lstiter(list, f);
}
