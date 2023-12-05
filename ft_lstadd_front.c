/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 22:08:31 by tmurua            #+#    #+#             */
/*   Updated: 2023/12/05 16:44:29 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst = ft_lstnew("World!");

	ft_lstadd_front(&lst, ft_lstnew("Hello,"));
	printf("List after adding nodes to the front:\n");

	t_list *new = lst;
	while (new != NULL)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}

	while (lst != NULL)
	{
		t_list *temp = lst->next;
		free(lst);
		lst = temp;
	}
}
*/
