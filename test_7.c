/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_7.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:37:49 by hmaronen          #+#    #+#             */
/*   Updated: 2021/12/01 12:24:33 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "colors.h"
#include <stdio.h>
#include <ctype.h>

/*	Test file for functions:
 *	ft_lstnew
 *	ft_lstadd
 *	ft_lstdelone
 *	ft_lstdel
 *	ft_lstiter
 *	ft_lstmap
 */

static void	ft_list_del(void *content, size_t content_size)
{
	content_size = 0;
	ft_memdel(&content);

}
void	test_7()
{
	/*	lstnew	*/
	printf("%sFT_LSTNEW TESTS\n", GREEN);
	printf(RESET);
	/* Normal char test */
	t_list	*list;
	const char *s1;
	s1 = "Hello";
	list = ft_lstnew(s1, ft_strlen((char *)s1));
	printf("String content:\n%s\n",s1); 
	printf("Node 1 content:\n%s\n\n", list->content);

	/* Content is null, but still sending content size */
	t_list	*list2;
	const char *s2;
	s2 = NULL;
	printf("String 2 content:\n%s\n", s2);
	list2 = ft_lstnew(s2, 5);
	printf("Node 2 content:\n%s\n\n", list2->content);

	///* Sending content, but size is 0 */
	t_list	*list3;
	printf("String content but content_size set to 0:\n%s\n",s1); 
	list3 = ft_lstnew(s1, 0);
	printf("%s\n", list3->content);

	/*	lstadd	*/
	printf("%sFT_LSTADD TESTS\n", GREEN);
	printf(RESET);
	t_list		*list4;
	t_list		*list5;
	const char	*s3;
	const char	*s4;

	s3 = "Hello Hive!";
	s4 = "This is Marvin!";
	list4 = ft_lstnew(s3, ft_strlen((char *)s3) + 1);
	list5 = ft_lstnew(s4, ft_strlen((char *)s4) + 1);

	ft_lstadd(&list4, list5);
	printf("1st NODE:\n%s\n", list4->content);
	printf("2nd NODE:\n%s\n\n", list4->next->content);
	printf("With ft_print_list():\n");
	ft_print_list(list4);

	/*	lstdelone	*/
	void	(*del)(void *, size_t);

	del = &ft_list_del;

	/* Normal test */	
	const char *s1;
	s1 = "Hello!";
	t_list	*list6;
	list = ft_lstnew(s1, ft_strlen((char *)s1));
	ft_print_list(list);
	ft_lstdelone(&list, del);
	ft_print_list(list);

	/* If sending empty string */
	t_list *list7;
	const char *s2;
	s2 = NULL;
	list2 = ft_lstnew(s2, 0);
	ft_lstdelone(&list2, del);
	ft_print_list(list2);

}
