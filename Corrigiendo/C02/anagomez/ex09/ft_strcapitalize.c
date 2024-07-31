/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagomez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:47:44 by anagomez          #+#    #+#             */
/*   Updated: 2024/07/16 15:47:47 by anagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	alpha(char c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9')))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (n == 0 && (str[n] >= 'a' && str[n] <= 'z'))
		{
			str[n] = str[n] - 32;
		}
		else if (alpha(str[n - 1]) == 1 && (str[n] >= 'a' && str[n] <= 'z'))
		{
			str[n] = str[n] - 32;
		}
		else if (alpha(str[n - 1]) == 0 && (str[n] >= 'A' && str[n] <= 'Z'))
		{
			str[n] = str[n] + 32;
		}
		n++;
	}
	return (str);
}

int	main(void)
{
	char	string[] = "crItical 89micelle concentration HOLA HOL1ASD hol1a";
	printf("original: %s\n", string);
	ft_strcapitalize(string);
	printf("capitalizado: %s\n", string);
}
