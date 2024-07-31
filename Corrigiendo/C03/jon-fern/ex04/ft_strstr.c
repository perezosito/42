/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jon-fern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:42:59 by jon-fern          #+#    #+#             */
/*   Updated: 2024/07/28 18:37:55 by jon-fern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str1, char *str2)
{
	char	*pointer;
	char	*pointer2;

	while (*str1)
	{
		if (*str1 == *str2)
		{
			pointer = str1;
			pointer2 = str2;
			while (*str1 && *str2 && *str1 == *str2)
			{
				str1++;
				str2++;
			}
			if (*str2 == '\0')
				return (pointer);
			else
			{
				str2 = pointer2;
				str1--;
			}
		}
		str1++;
	}
	return (NULL);
}
#include <stdio.h>

int main() {
    char str1[] = "Hola, bienvenido a la prueba de strstr.";
    char to_find1[] = "bienvenido";
    char to_find2[] = "no encontrado";
    char to_find3[] = "la prueba";

    char *result;

    // Prueba 1: Subcadena presente
    result = ft_strstr(str1, to_find1);
    if (result) {
        printf("Encontrado: '%s' en '%s'\n", to_find1, result);
    } else {
        printf("No encontrado: '%s'\n", to_find1);
    }

    // Prueba 2: Subcadena no presente
    result = ft_strstr(str1, to_find2);
    if (result) {
        printf("Encontrado: '%s' en '%s'\n", to_find2, result);
    } else {
        printf("No encontrado: '%s'\n", to_find2);
    }

    // Prueba 3: Otra subcadena presente
    result = ft_strstr(str1, to_find3);
    if (result) {
        printf("Encontrado: '%s' en '%s'\n", to_find3, result);
    } else {
        printf("No encontrado: '%s'\n", to_find3);
    }

    return 0;
}
