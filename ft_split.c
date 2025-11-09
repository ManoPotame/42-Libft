/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:11:02 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/09 00:18:18 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*skip_splitter(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] == c && str[i + 1] != '\0')
		i++;
	if (str[i] == c && str[i] != 0)
		i++;
	return (str + i);
}

static size_t	line_counter(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 1;
	if (!s[0])
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}


static void	free_split(char **array, int i)
{
	while (i >= 0)
	{
		free(array[i]);
		--i;
	}
	free(array);
}
static size_t	string_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	size_t			i;
	char			*str;
	const size_t	line_count = line_counter(skip_splitter((char *)s, c), c);

	if (!s)
		return (NULL);
	str = (char *)s;
	i = 0;
	array = ft_calloc(sizeof(char *), line_count + 1);
	if (!array)
		return (NULL);
	while (i < line_count)
	{
		str = skip_splitter(str, c);
		array[i] = ft_substr(str, 0, string_len(str, c));
		str += string_len(str, c);
		if (!array[i])
		{
			free_split(array, i - 1);
			return (NULL);
		}
		i++;
	}
	return (array);
}


// #include <stdio.h>
// int main()
// {
// 	char **freak = ft_split("   TAAAAAAKE       OOOON     MEEEE   ", ' ');

// 	printf("split: %p", freak);
// }
