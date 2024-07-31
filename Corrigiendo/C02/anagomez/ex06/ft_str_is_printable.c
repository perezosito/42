/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagomez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:41:05 by anagomez          #+#    #+#             */
/*   Updated: 2024/07/16 12:41:07 by anagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	string1[] = "Hola45!";
	char	string2[] = "Hola\n";
	char	string3[] = "";
	printf("imprimible: %d\n", ft_str_is_printable(string1));
	printf("no imprimible: %d\n", ft_str_is_printable(string2));
	printf("vacío: %d\n", ft_str_is_printable(string3));
}
