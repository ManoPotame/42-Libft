/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:05:37 by mcrenn            #+#    #+#             */
/*   Updated: 2025/10/19 18:06:54 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest));
}

#include <stdio.h>
#include <string.h>
int main()
{
	//printf("%d\n", ft_strlcat("pouette", "pouet", 8));
	printf("%d", strlcat("pouette", "pouet", 8)); //Max 8, cat plus len:12
}
