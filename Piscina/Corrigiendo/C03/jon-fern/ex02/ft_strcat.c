/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jon-fern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:30:45 by jon-fern          #+#    #+#             */
/*   Updated: 2024/07/17 16:48:06 by jon-fern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		s1[j + i] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
#include <stdio.h>
int main()
{
	char dest[50] = "Hola, ";
	char src[] = "mundo!";

	ft_strcat(dest, src);
	printf("%s\n", dest); // Salida: Hola, mundo!
	return 0;
}
