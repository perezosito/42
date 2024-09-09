/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 02:49:33 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/15 02:49:40 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	char			*d;
	const char		*s;
	unsigned int	len;

	d = dest;
	s = src;
	len = 0;
	while (*s && len + 1 < size)
	{
		*d++ = *s++;
		len++;
	}
	if (size > 0)
	{
		*d = '\0';
	}
	while (*s++)
	{
		len++;
	}
	return (len);
}
int main()
{
    char src[] = "Hola Mundo";
    char dest[20];
    unsigned int size = sizeof(dest);
    unsigned int len;

    len = ft_strlcpy(dest, src, size);

    printf("Cadena fuente: %s\n", src);
    printf("Cadena destino: %s\n", dest);
    printf("Longitud de la cadena fuente: %u\n", len);

    return 0;
}
