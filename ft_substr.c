/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:35:50 by mcrenn            #+#    #+#             */
/*   Updated: 2025/10/26 15:14:35 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
	{
		dest = ft_strdup("");
		return (dest);
	}
	while (s[start + i] && i < len)
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == 0)
		return (NULL);
	ft_strlcpy(dest, s + start, i + 1);
	return (dest);
}
