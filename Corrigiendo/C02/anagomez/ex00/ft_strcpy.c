/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagomez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:50:15 by anagomez          #+#    #+#             */
/*   Updated: 2024/07/15 14:50:17 by anagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*og_dest;

	og_dest = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (og_dest);
}

int	main(void)
{
	char	fuente[11] = "Bienvenido";
	char	destino[50];

	ft_strcpy(destino, fuente);
	printf("source: %s\ndestination: %s", fuente, destino);
}
