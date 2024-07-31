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

#include <stdio.h>
int main() {
    char source[] = "Hola, mundo!";
    char destination[50];
    ft_strncpy(destination, source, 5);
    printf("Cadena original: %s\n", source);
    printf("Cadena copiada: %s\n", destination);
    return 0;
}
