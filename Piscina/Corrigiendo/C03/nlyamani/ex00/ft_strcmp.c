/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:43:21 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 17:18:07 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (s1[index] - s2[index]);
}

int	main(void)
{
	char str0[] = "ALL";
	char str1[] = "ALL";
	int result0 = ft_strcmp(str0, str1);
	printf("%d ", result0);

	char str2[] = "ALL";
	char str3[] = "all";
	int result1 = ft_strcmp(str2, str3);
	printf("%d ", result1);

	char str4[] = "all";
	char str5[] = "ALL";
	int result2 = ft_strcmp(str4, str5);
	printf("%d \n", result2);

	return (0);
}

