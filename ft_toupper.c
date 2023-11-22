/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:07:34 by tmurua            #+#    #+#             */
/*   Updated: 2023/11/14 18:37:29 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int lower)
{
	int	upper;

	if (lower >= 'a' && lower <= 'z')
		upper = lower - ('a' - 'A');
	else
		upper = lower;
	return (upper);
}
