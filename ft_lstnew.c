/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:26:06 by tmurua            #+#    #+#             */
/*   Updated: 2023/12/05 16:07:42 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	int		content_int;
	t_list	*node_int;
	char	*content_str;
	t_list	*node_str;

	content_int = 42;
	node_int = ft_lstnew(&content_int);
	content_str = "Hello, World!";
	node_str = ft_lstnew(content_str);
	printf("Content of node_int: %d\n", *(int *)node_int->content);
	printf("Content of node_str: %s\n", (char *)node_str->content);
	free(node_int);
	free(node_str);
}
*/
