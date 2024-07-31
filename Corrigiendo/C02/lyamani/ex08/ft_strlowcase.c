/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:28:47 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 14:32:16 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] - 'A' + 'a';
		}
		index++;
	}
	return (str);
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
	char src[] = "HELLO";
	print_array(src);
 	print_array(ft_strlowcase(src));

	char src1[] = "helSDo";
	print_array(src1);
 	print_array(ft_strlowcase(src1));


	char src2[] = "hello";
	print_array(src2);
 	print_array(ft_strlowcase(src2));

	char src3[] = "";
	print_array(src3);
 	print_array(ft_strlowcase(src3));
	return (0);
}

