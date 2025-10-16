/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:58:08 by mcrenn            #+#    #+#             */
/*   Updated: 2025/10/16 16:51:15 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;

	if (n == 0)
		return (dest);
	if (dest > src)
	{
		index = n;
		while (index > 0)
		{
			index --;
			((char *)dest)[index] = ((char *)src)[index];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

