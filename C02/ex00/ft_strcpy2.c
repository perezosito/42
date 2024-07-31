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
char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*originalp;
	
	originalp = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (originalp);
}

#include <stdio.h>
int main() {
    char source[] = "Hola, mundo!";
    char destination[50];
    ft_strcpy(destination, source);
    printf("Cadena original: %s\n", source);
    printf("Cadena copiada: %s\n", destination);
    return 0;
}
