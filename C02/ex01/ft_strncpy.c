/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 21:11:45 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/13 21:11:48 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*originalpointer;

	originalpointer = dest;
	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (originalpointer);
}

/*#include <stdio.h>
int main() {
    char source[] = "Hola, mundo!";
    char destination[50];
    ft_strncpy(destination, source, 5);
    printf("Cadena original: %s\n", source);
    printf("Cadena copiada: %s\n", destination);
    return 0;
}*/
