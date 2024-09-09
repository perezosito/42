/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:02:15 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/24 17:02:19 by gnaveran         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	sizea;

	sizea = long_array(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[sizea] = src [i];
		i++;
		sizea++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main ()
{
	char	dest[] = "Werror -Wall -Wextra";
	char	src[] = "Gamusino";
	
	*dest=*ft_strncat(dest, src, 5);
	printf("%s",dest);
}*/
