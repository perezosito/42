/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:49:09 by jose-ang          #+#    #+#             */
/*   Updated: 2024/07/19 14:51:56 by jose-ang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	if (size != 0)
	{
		while (*src != '\0' )
		{
			if (count++ < size - 1)
			{
				*dest = *src;
				dest++;
			}
			src++;
		}
		*dest = '\0';
	}
	else
	{
		while (*src != '\0')
		{
			count++;
			src++;
		}
	}
	return (count);
}


#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main() {
    char src1[] = "Hello, World!";
    char dest1[20];
    char src2[] = "Another test";
    char dest2[10];
    char src3[] = "Short";
    char dest3[3];

    unsigned int copied;

    // Test 1: Size larger than the source string
    copied = ft_strlcpy(dest1, src1, sizeof(dest1));
    printf("Test 1:\n");
    printf("Source: %s\n", src1);
    printf("Destination: %s\n", dest1);
    printf("Number of characters copied (excluding null terminator): %u\n", copied);
    printf("\n");

    // Test 2: Size smaller than the source string
    copied = ft_strlcpy(dest2, src2, sizeof(dest2));
    printf("Test 2:\n");
    printf("Source: %s\n", src2);
    printf("Destination: %s\n", dest2);
    printf("Number of characters copied (excluding null terminator): %u\n", copied);
    printf("\n");

    // Test 3: Size smaller than the source string, and size is very small
    copied = ft_strlcpy(dest3, src3, sizeof(dest3));
    printf("Test 3:\n");
    printf("Source: %s\n", src3);
    printf("Destination: %s\n", dest3);
    printf("Number of characters copied (excluding null terminator): %u\n", copied);
    printf("\n");

    return 0;
}
