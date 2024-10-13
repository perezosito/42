/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:02:29 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 14:02:36 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static unsigned int	handle_negative(int n, char *str)
{
	if (n < 0)
	{
		str[0] = '-';
		return (-n);
	}
	return (n);
}

static char	*create_string(int length)
{
	char	*str;

	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	str[length] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				length;
	char			*str;

	length = get_num_length(n);
	str = create_string(length);
	if (!str)
		return (NULL);
	num = handle_negative(n, str);
	while (length > 0)
	{
		if (n < 0 && length == 1)
			break ;
		str[--length] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
