/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:54:28 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 13:55:15 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_atoi.c
#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
		if (result * sign > INT_MAX)
			return (-1);
		if (result * sign < INT_MIN)
			return (0);
	}
	return ((int)(result * sign));
}
