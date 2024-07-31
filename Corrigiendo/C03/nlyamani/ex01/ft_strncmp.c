/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:07:50 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 17:24:00 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && (s1[index] != '\0' || s2[index] != '\0'))
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

int	main(void)
{
	char str0[] = "ALL";
	char str1[] = "ALL";
	int result0 = ft_strncmp(str0, str1, 2);
	printf("%d ", result0);

	char str2[] = "ALL";
	char str3[] = "AlL";
	int result1 = ft_strncmp(str2, str3, 2);
	printf("%d ", result1);

	char str4[] = "all";
	char str5[] = "ALL";
	int result2 = ft_strncmp(str4, str5, 3);
	printf("%d \n", result2);

	return (0);
}

