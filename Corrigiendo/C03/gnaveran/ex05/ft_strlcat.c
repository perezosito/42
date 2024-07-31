/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 06:16:28 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/27 06:17:18 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	long_array(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sizea;

	sizea = long_array(dest);
	i = long_array(dest);
	if (long_array(dest) + long_array(src) -2 <= size -1)
	{
		while (dest[i - 1] != '\0')
		{
			dest[i] = src [i - sizea];
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			dest[i] = src [i - sizea];
			i++;
		}
		i--;
	}
	dest[i] = '\0';
	return (i + 1);
}
/*
#include <stdio.h>
int main ()
{
	char	dest[25] = "Werror -Wall -Wextra";
	char	src[] = "Gamusino";
	unsigned int 	i;
	
	i=ft_strlcat(dest, src, sizeof(dest));
	printf("%s",dest);
	printf("%d",i);
}*/
