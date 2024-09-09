/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:48:30 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/18 17:52:08 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (*str)
	{
		contador++;
		str++;
	}
	return (contador);
}
int main(void)
{
    char *cadena = "Hola, mudfgdfgdfgdfgdfgndo!";
    int longitud;

    longitud = ft_strlen(cadena);

    printf("La longitud de la cadena \"%s\" es: %d\n", cadena, longitud);

    return 0;
}


