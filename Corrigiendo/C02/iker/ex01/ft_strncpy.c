/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrozas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:01:16 by ikrozas           #+#    #+#             */
/*   Updated: 2024/07/17 12:05:14 by ikrozas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
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
