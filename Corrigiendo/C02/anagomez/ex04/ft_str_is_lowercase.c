/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagomez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:27:15 by anagomez          #+#    #+#             */
/*   Updated: 2024/07/16 12:27:17 by anagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	string1[] = "hola";
	char	string2[] = "Hola";
	char	string3[] = "";
	printf("solo minúsculas: %d\n", ft_str_is_lowercase(string1));
	printf("otros: %d\n", ft_str_is_lowercase(string2));
	printf("vacío: %d\n", ft_str_is_lowercase(string3));
}
