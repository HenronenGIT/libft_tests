/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:10:20 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/26 15:47:59 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_list_del(void *content, size_t content_size)
{
	content_size = 0;
	ft_memdel(&content);
}

int	main(void)
{
	void	(*del)(void *, size_t);

	del = &ft_list_del;

	/* Normal test */	
	const char *s1;
	s1 = "Hello!";
	t_list	*list;
	list = ft_lstnew(s1, ft_strlen((char *)s1));
	ft_print_list(list);
	ft_lstdelone(&list, del);
	ft_print_list(list);

	/* If sending empty string */
	t_list *list2;
	const char *s2;
	s2 = NULL;
	list2 = ft_lstnew(s2, 0);
	ft_lstdelone(&list2, del);
	ft_print_list(list2);

}

