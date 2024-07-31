/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:34:47 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 16:55:49 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index++] = '\0';
	}
	return (dest);
}

void print_array( char *array) 
{
    while (*array) {
        write(1, array, 1);
        array++;
    }
    write(1, "\n", 1);
}

int main(void)
{

    char src[] = "hello";
    char dest[6];
    print_array(src);  
    ft_strncpy(dest, src, 2);
    print_array(dest);


    char src1[] = "hel\0lo";
    char dest1[6];
    print_array(src1);  
    ft_strncpy(dest1, src1, 2);
    print_array(dest1);

    return (0);
}

