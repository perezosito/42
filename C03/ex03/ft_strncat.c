/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:04:16 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/17 16:04:29 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*poriginal;

	poriginal = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb > 0)
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	*dest = '\0';
	return (poriginal);
}
/*#include <stdio.h>
int main()
{
	char dest[50] = "Hola, ";
	char src[] = "mundo!";

	ft_strncat(dest, src, 3);
	printf("%s\n", dest); // Salida: Hola, mun
	return 0;
}*/
