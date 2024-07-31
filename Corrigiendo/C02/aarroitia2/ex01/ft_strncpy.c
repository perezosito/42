/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:03:02 by aarroita          #+#    #+#             */
/*   Updated: 2024/07/16 19:03:49 by aarroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

// Declaración de la función ft_strncpy
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main() {
    char source[] = "Hello, world!";
    char destination[20]; // Asegúrate de que el tamaño sea suficiente para la cadena copiada

    // Llamada a ft_strncpy
    ft_strncpy(destination, source, 3);

    // Imprimir el resultado
    printf("Source: %s\n", source);
    printf("Destination after strncpy: %s\n", destination);

    return 0;
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*pointer;

	pointer = dest;
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (pointer);
}
