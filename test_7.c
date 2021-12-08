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

void    ft_print_list(t_list *list)
{
        while (list)
        {
                ft_putstr(list->content);
                list = list->next;
                ft_putchar('\n');
        }
}

static t_list	*ft_lcase_list(t_list *elem)
{
	return (elem);
}

static void	ft_list_del(void *content, size_t content_size)
{
	content_size = 0;
	ft_memdel(&content);
}

static void	ft_put_lststr(t_list *elem)
{
	ft_putstr(elem->content);
	ft_putchar('\n');
}

void	test_7()
{
	/*	lstnew	*/
	printf("%sFT_LSTNEW TESTS\n", GREEN);
	printf(RESET);
	t_list	*list;
	t_list	*list2;
	t_list	*list3;
	/* Normal char test */
	const char *s1;
	s1 = "Hello";
	list = ft_lstnew(s1, ft_strlen((char *)s1));
	printf("String content:\n%s\n",s1); 
	printf("Node 1 content:\n%s\n\n", list->content);
	/* Content is null, but still sending content size */
	const char *s2;
	s2 = NULL;
	printf("String 2 content:\n%s\n", s2);
	list2 = ft_lstnew(s2, 5);
	printf("Node 2 content_size:\n%zu", list2->content_size);
	printf("Node 2 content:\n%s\n\n", list2->content);
	/* Sending content, but size is 0 */
	printf("String content but content_size set to 0:\n|%s|\n",s1); 
	list3 = ft_lstnew(s1, 0);
	printf("|%s|\n", list3->content);
	free(list);
	free(list2);
	free(list3);

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
	printf("Print whole list:\n");
	while (list4)
	{
        printf("%s\n", list4->content);
        list4 = list4->next;
        printf("\n");
    }
	printf("\n");

	/*	lstdelone	*/
	printf("%sFT_LSTDELONE TESTS\n", GREEN);
	printf(RESET);
	ft_putstr(RESET);

	t_list	*li1;
	void	(*del)(void *, size_t);
	del = &ft_list_del;
	/* Normal test */	
	const char *ss1;
	ss1 = "Hello!";
	li1 = ft_lstnew(ss1, ft_strlen((char *)ss1 + 1));
	printf("Node before lstdelone():\n");
    printf("%s\n", li1->content);
	ft_lstdelone(&li1, del);
	printf("Node after lstdelone():\n");
	if (!li1)
	{
		printf(" [OK] l1 dont exists");
	}
	else
		printf("Something went wrong.");
	printf("\n");

	/*	LSTDEL	*/
	printf("%sFT_LSTDEL TESTS\n", GREEN);
	printf(RESET);
	ft_putstr(RESET);
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	s1 = "Hello world!";
	s2 = "This";
	s3 = "is";
	s4 = "Hive";
	node1 = ft_lstnew(s1, ft_strlen((char *)s1 + 1));
	node2 = ft_lstnew(s2, ft_strlen((char *)s2) + 1);
	node3 = ft_lstnew(s3, ft_strlen((char *)s3) + 1);
	node4 = ft_lstnew(s4, ft_strlen((char *)s4) + 1);
	/*	Chain nodes	*/
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	printf("List before lstdel():\n");
	ft_print_list(node1);
	printf("\n");
	ft_lstdel(&node1, del);
	if (!node1)
		printf("Node 1 is NULL\n");
	printf("List after lstdel()\n");
	ft_print_list(node1);
	printf("\n");

	/*	lstiter	*/
	printf("%sFT_LSTITER TESTS\n", GREEN);
	printf(RESET);
	ft_putstr(RESET);
	t_list	*l1;
	t_list	*l2;
	t_list	*l3;
	t_list	*l4;
	const char	*str1;
	const char	*str2;
	const char	*str3;
	const char	*str4;
	void (*ff)(t_list *elem);
	ff = &ft_put_lststr;
	str1 = "First String!";
	str2 = "Second String!";
	str3 = "3rd String!";
	str4 = "4th String!";
	/* make all new nodes */
	l1 = ft_lstnew(str1, ft_strlen((char *)str1 + 1));
 	l2 = ft_lstnew(str2, ft_strlen((char *)str2 + 1));
 	l3 = ft_lstnew(str3, ft_strlen((char *)str3 + 1));
	l4 = ft_lstnew(str4, ft_strlen((char *)str4 + 1));
	/* chain nodes */
	l1->next = l2;
	l2->next = l3;
	l3->next = l4;
	ft_lstiter(l1, ff);
	free(l1);
	free(l2);
	free(l3);
	free(l4);
	printf("\n");
	/* LSTMAP	*/
	printf("%sFT_LSTMAP TESTS\n", GREEN);
	printf(RESET);
	ft_putstr(RESET);

	const char	*sss1;
	const char	*sss2;
	const char	*sss3;
	const char	*sss4;
	t_list *(*f)(t_list *elem);

	f = &ft_lcase_list;
	sss1 = "FirSt StrIng!";
	sss2 = "Second StrIng!";
	sss3 = "3rD StriNg!";
	sss4 = "4tH StriNg!";

	/* make all new nodes */
	list = ft_lstnew(sss1, ft_strlen((char *)sss1) + 1);
	list2 = ft_lstnew(sss2, ft_strlen((char *)sss2) + 1);
	list3 = ft_lstnew(sss3, ft_strlen((char *)sss3) + 1);
	list4 = ft_lstnew(sss4, ft_strlen((char *)sss4) + 1);

	/* chain nodes */
	list->next = list2;
	list2->next = list3;
	list3->next = list4;

	printf("Original list:\n");
	ft_print_list(list);
	printf("\n");

	t_list	*new_list;
	new_list = ft_lstmap(list, f);
	printf("New list:\n");
	ft_print_list(new_list);
}
