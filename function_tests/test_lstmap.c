/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:22:28 by hmaronen          #+#    #+#             */
/*   Updated: 2021/12/01 11:39:08 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lcase_list(t_list *elem)
{
	return (elem);
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
	t_list *(*f)(t_list *elem);

	f = &ft_lcase_list;
	s1 = "FirSt StrIng!";
	s2 = "Second StrIng!";
	s3 = "3rD StriNg!";
	s4 = "4tH StriNg!";

	/* make all new nodes */
	list = ft_lstnew(s1, ft_strlen((char *)s1) + 1);
	list2 = ft_lstnew(s2, ft_strlen((char *)s2) + 1);
	list3 = ft_lstnew(s3, ft_strlen((char *)s3) + 1);
	list4 = ft_lstnew(s4, ft_strlen((char *)s4) + 1);

	/* chain nodes */
	list->next = list2;
	list2->next = list3;
	list3->next = list4;

	t_list	*new_list;
	new_list = ft_lstmap(list, f);
	ft_print_list(new_list);
}
