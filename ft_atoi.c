/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:42:54 by mcrenn            #+#    #+#             */
/*   Updated: 2025/10/23 11:58:51 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == ' ')
		i++;
	while (nptr[i])
	{
		if (nptr[i] == '\\')
			i += 2;
		if (ft_isdigit(nptr[i]) == 0)
			return (result * sign);
		result = (result * 10) + nptr[i] - '0';
		i++;
	}
	return (result * sign);

}
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **argv)
{
	(void)ac;
	printf("%d\n", atoi(" \t\v\n\r\f123"));
	printf("%d\n", ft_atoi(argv[1]));
}
