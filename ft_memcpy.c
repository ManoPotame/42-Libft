/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:29:56 by mcrenn            #+#    #+#             */
/*   Updated: 2025/10/16 16:03:27 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	if (dest == 0 && src == 0)
		return (NULL);
	while (index < n)
	{
		((char *)dest)[index] = ((char *)src)[index];
		index ++;
	}
	return (dest);
}
