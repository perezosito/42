/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:35:29 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/17 21:35:42 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}
/*
#include <stdio.h>

int main()
{
    char str1[] = "Hola, mundo!";
    char str2[] = "";
    char str3[] = "42";
    char str4[] = "Esto es una prueba con más caracteres.";
    printf("La longitud de '%s' es: %d\n", str1, ft_strlen(str1));
    printf("La longitud de '%s' es: %d\n", str2, ft_strlen(str2));
    printf("La longitud de '%s' es: %d\n", str3, ft_strlen(str3));
    printf("La longitud de '%s' es: %d\n", str4, ft_strlen(str4));

    return 0;
}*/
