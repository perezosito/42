/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagomez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:35:03 by anagomez          #+#    #+#             */
/*   Updated: 2024/07/16 12:35:05 by anagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	string1[] = "HOLA";
	char	string2[] = "Hola";
	char	string3[] = "";
	printf("solo mayúsculas: %d\n", ft_str_is_uppercase(string1));
	printf("otros: %d\n", ft_str_is_uppercase(string2));
	printf("vacío: %d\n", ft_str_is_uppercase(string3));
}
