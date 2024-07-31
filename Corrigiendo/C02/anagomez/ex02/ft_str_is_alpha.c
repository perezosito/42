/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagomez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:00:17 by anagomez          #+#    #+#             */
/*   Updated: 2024/07/16 11:00:19 by anagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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
	char	string2[] = "hola2";
	char	string3[] = "";
	printf("solo letras: %d\n", ft_str_is_alpha(string1));
	printf("letras + números: %d\n", ft_str_is_alpha(string2));
	printf("vacío: %d\n", ft_str_is_alpha(string3));
}
