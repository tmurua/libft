/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:06:51 by tmurua            #+#    #+#             */
/*   Updated: 2023/11/22 18:40:26 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*s;
	size_t	len_dest;
	size_t	len_src;
	size_t	res;
	size_t	i;

	s = (char *)src;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > len_dest)
		res = len_src + len_dest;
	else
		res = len_src + size;
	while (s[i] && (len_dest + 1) < size)
	{
		dest[len_dest] = s[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (res);
}
