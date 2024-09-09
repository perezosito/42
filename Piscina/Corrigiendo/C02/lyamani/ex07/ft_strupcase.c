/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:29:38 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 14:27:18 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 'a' + 'A';
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
	char src[] = "hello";
	print_array(src);
 	print_array(ft_strupcase(src));

	char src1[] = "helSDo";
	print_array(src1);
 	print_array(ft_strupcase(src1));
	

	char src2[] = "HELLO";
	print_array(src2);
 	print_array(ft_strupcase(src2));

	char src3[] = "";
	print_array(src3);
 	print_array(ft_strupcase(src3));		
	return (0);
}

