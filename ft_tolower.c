/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:39:53 by tmurua            #+#    #+#             */
/*   Updated: 2023/11/16 19:33:46 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int upper)
{
	int	lower;

	if (upper >= 'A' && upper <= 'Z')
		lower = upper + ('a' - 'A');
	else
		lower = upper;
	return (lower);
}
