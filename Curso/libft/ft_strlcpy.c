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
// ft_strlcpy.c
#include "libft.h"
#include <stdio.h>
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
int main(void)
{
    char dest[20];
    const char *src = "Hello, World!";
    unsigned int len;

    len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Copied string: %s\n", dest);
    printf("Length of src: %u\n", len);

    return 0;
}
