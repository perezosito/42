/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 06:50:26 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/23 06:50:29 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	size_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		sizea;
	int		sizeb;
	int		i;

	sizea = size_str(dest);
	sizeb = size_str(src);
	i = sizea;
	while (i < sizea + sizeb)
	{
		dest[i] = src [i - sizea];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main ()
{
	char dest[]="Werror -Wall -Wextra";
	char src[]="Gamusino";
	
	*dest=*ft_strcat(dest,src);
	printf("%s",dest);
 }*/
