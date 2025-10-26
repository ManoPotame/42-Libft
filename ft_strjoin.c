/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:22:32 by mcrenn            #+#    #+#             */
/*   Updated: 2025/10/26 18:56:27 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(s1) + ft_strlen(s2);
	dest = ft_calloc(sizeof(char), (len + 1));
	if (dest == 0)
		return (NULL);
	ft_strlcat(dest, s1, ft_strlen(s1) + 1);
	ft_strlcat(dest, s2, (len + 1));
	return (dest);
}
