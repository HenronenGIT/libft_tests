/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:39:16 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/26 17:08:43 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_list_del(void *content, size_t content_size)
{
	content_size = 0;
	ft_memdel(&content);
	printf("Pointer address after memdel%p\n", content);
}

int	main(void)
{
	const char	*s1;
	void	(*del)(void *, size_t);
	
	del = &ft_list_del;
	
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	s1 = "Hello world!";

	node1 = ft_lstnew(s1, ft_strlen((char *)s1));
	node2 = ft_lstnew("This", 5);
	node3 = ft_lstnew("is", 3);
	node4 = ft_lstnew("Hive", 5);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	ft_print_list(node1);
	ft_putchar('\n');
	ft_lstdel(&node1, del);
	if (!node3)
		printf("Node3 does not exist\n");
	printf("Node 3 address: %p\n", node3);
	if (!node2)
		printf("Node2 content is NULL\n");
	printf("Node 2 address: %p\n", node2);
	if (!node1)
		printf("Node1 content is NULL\n");
	printf("Node 1 address: %p\n", node1);
	ft_print_list(node1);
}
