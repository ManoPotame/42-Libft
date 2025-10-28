/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:59:08 by mcrenn            #+#    #+#             */
/*   Updated: 2025/10/28 11:29:51 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*emptystring(void)
{
	char	*dest;

	dest = malloc(1);
	dest[0] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	end = ft_strlen(s1);
	if (end == 0 || set == NULL)
		return (emptystring());
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	while (ft_strrchr(set, s1[end]) && end > start)
		end--;
	if (start > end)
		return (emptystring());
	return (ft_substr(s1, start, (end - start + 1)));
}
