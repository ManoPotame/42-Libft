/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:53:51 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/09 00:50:32 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len <= 0 || !big || !little || big[0] == '\0')
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while ((little[j] && (little[j] == big[i + j]) && (i + j < len)))
			j++;
		if (j == ft_strlen(little))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
