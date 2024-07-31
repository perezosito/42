/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:20:11 by jose-ang          #+#    #+#             */
/*   Updated: 2024/07/18 09:03:17 by jose-ang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	iter;

	iter = 0;
	while (src[iter] != '\0')
	{
		dest[iter] = src[iter];
		iter++;
	}
	dest[iter] = '\0';
	return (dest);
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
