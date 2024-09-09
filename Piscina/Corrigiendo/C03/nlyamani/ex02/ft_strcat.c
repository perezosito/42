/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:27:10 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 17:50:34 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dest_index;
	int	src_index;

	dest_index = 0;
	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}
	src_index = 0;
	while (src[src_index] != '\0')
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
	char src[] = "llo";
	char dest[] = "he";
	print_array(src);
	print_array(dest);
 	print_array(ft_strcat(dest, src));

	return (0);
}

