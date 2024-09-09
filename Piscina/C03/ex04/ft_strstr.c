/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:29:52 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/17 16:30:05 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*psame;

	while (*str && *to_find != *str)
	{
		str++;
	}
	if (*to_find == *str)
		psame = str;
	while (*to_find && *to_find == *str)
	{
		to_find++;
		str++;
	}
	if (*to_find == '\0')
		return (psame);
	else
		return (0);
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
