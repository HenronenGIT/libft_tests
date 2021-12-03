/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:38:39 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/26 14:17:33 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	/* Normal char test */
	t_list	*list;
	const char *s1;
	s1 = "Hello";
	list = ft_lstnew(s1, ft_strlen((char *)s1));
	ft_print_list(list);

	/* Normal int test */
	//t_list	*list2;
	//list2 = ft_lstnew(42, 4);

	/* Content is null, but still sending content size */
	t_list	*list3;
	list3 = ft_lstnew(NULL, 5);
	//ft_print_list(list3);

	///* Sending content, but size is 0 */
	t_list	*list4;
	list4 = ft_lstnew("Hello", 0);
	ft_print_list(list4);
}
