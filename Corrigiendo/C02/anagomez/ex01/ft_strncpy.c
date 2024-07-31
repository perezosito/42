/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagomez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:50:23 by anagomez          #+#    #+#             */
/*   Updated: 2024/07/15 18:50:25 by anagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*og_dest;

	og_dest = dest;
	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (og_dest);
}

int	main(void)
{
	unsigned int	x;
	char	fuente[12] = "Bienvenido!";
	char	destino[50];

	x = 5;
	ft_strncpy(destino, fuente, x);
	printf("source: %s\ndestination: %s", fuente, destino);
}
