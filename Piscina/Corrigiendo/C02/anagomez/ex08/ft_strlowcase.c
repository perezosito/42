/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagomez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:30:13 by anagomez          #+#    #+#             */
/*   Updated: 2024/07/16 15:30:15 by anagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*og_str;

	og_str = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (og_str);
}

int	main(void)
{
	char	string[] = "BIENVENIDO!";
	printf("mayúsculas: %s\n", string);
	ft_strlowcase(string);
	printf("minúsculas: %s", string);
}
