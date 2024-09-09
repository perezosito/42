/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:52:03 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 18:21:17 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_index;
	unsigned int	src_index;

	dest_index = 0;
	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}
	src_index = 0;
	while (src[src_index] != '\0' && src_index < nb)
	{
		dest[dest_index] = src[src_index];
		src_index++;
		dest_index++;
	}
	dest[dest_index] = '\0';
	return (dest);
}

void print_array(char *array)
{
    while (*array) {
        write(1, array, 1);
        array++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    char dest[50] = "Hola, ";
    char src[] = "mundo!";
    unsigned int nb = 1; // Número de caracteres a concatenar

    // Imprimir el contenido original de dest
    print_array(dest);

    // Llamar a la función ft_strncat
    ft_strncat(dest, src, nb);

    // Imprimir el contenido modificado de dest
    print_array(dest);

    return 0;
}
