/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jon-fern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:30:45 by jon-fern          #+#    #+#             */
/*   Updated: 2024/07/28 09:20:13 by jon-fern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *s1, char *s2, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0' && j < nb)
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

	ft_strncat(dest, src, 3);
	printf("%s\n", dest); // Salida: Hola, mun
	return 0;
}
