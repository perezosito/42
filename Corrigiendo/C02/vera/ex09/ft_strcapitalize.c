/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veragarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:43:36 by veragarc          #+#    #+#             */
/*   Updated: 2024/07/17 15:25:31 by veragarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (i - 1 == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i - 1] = str[i - 1] - 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] >= ' ' && str[i - 1] <= '/')
				str[i] = str[i] - 32;
			else if (str[i - 1] >= ':' && str[i - 1] <= '@')
				str[i] = str[i] - 32;
			else if (str[i - 1] >= '[' && str[i - 1] <= '`')
				str[i] = str[i] - 32;
			else if (str[i - 1] >= '{' && str[i - 1] <= '~')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	arr[5];

	arr[0] = 'a';
	arr[1] = 'b';
	arr[2] = '-';
	arr[3] = 'c';
	arr[4] = '\0';
	char *str = ft_strcapitalize(arr);
	printf("%c", str[0]);
	printf("%c", str[1]);
	printf("%c", str[2]);
	printf("%c", str[3]);
}*/
