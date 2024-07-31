/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagomez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:01:42 by anagomez          #+#    #+#             */
/*   Updated: 2024/07/16 12:01:45 by anagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	string1[] = "688764";
	char	string2[] = "a87";
	char	string3[] = "";
	printf("solo dígitos: %d\n", ft_str_is_numeric(string1));
	printf("otros: %d\n", ft_str_is_numeric(string2));
	printf("vacío: %d\n", ft_str_is_numeric(string3));
}
