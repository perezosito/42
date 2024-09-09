/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:58:56 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/17 16:59:06 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*poriginal;
	int		counter;

	counter = 0;
	poriginal = dest;
	while (*dest)
	{
		dest++;
		counter++;
	}
	while (*src && size > 0)
	{
		*dest = *src;
		src++;
		dest++;
		size--;
		counter++;
	}
	*dest = '\0';
	counter++;
	return (counter);
}/*
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main() {
    char dest[20] = "Hola";
    char src[] = " Mundo";
    unsigned int size = sizeof(dest);

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Resultado: %s\n", dest);           // Debe imprimir: "Hola Mundo"
    printf("Longitud total: %u\n", result);    // Longitud esperada: 11

    // Prueba con un tamaño limitado
    char dest2[10] = "Hola";
    char src2[] = " Mundo";
    unsigned int result2 = ft_strlcat(dest2, src2, sizeof(dest2));

    printf("Resultado (limitado): %s\n", dest2); // Debe imprimir: "Hola M"
    printf("Longitud total (limitado): %u\n", result2); // Longitud esperada: 11

    return 0;
}*/
