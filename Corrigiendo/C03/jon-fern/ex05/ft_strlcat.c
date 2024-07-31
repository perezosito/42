/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jon-fern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:50:17 by jon-fern          #+#    #+#             */
/*   Updated: 2024/07/28 18:38:36 by jon-fern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j - 1);
}

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
}

