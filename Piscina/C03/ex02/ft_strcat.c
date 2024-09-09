/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:45:58 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/17 15:46:16 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char	*poriginal;

	poriginal = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (poriginal);
}
/*#include <stdio.h>
int main()
{
	char dest[50] = "Hola, ";
	char src[] = "mundo!";

	ft_strcat(dest, src);
	printf("%s\n", dest); // Salida: Hola, mundo!
	return 0;
}*/
