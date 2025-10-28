/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:56:17 by mcrenn            #+#    #+#             */
/*   Updated: 2025/10/28 10:19:59 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[index]);
	while (index >= 0)
	{
		if (s[index] == (char)c)
			return ((char *)&s[index]);
		index --;
	}
	return (NULL);
}
