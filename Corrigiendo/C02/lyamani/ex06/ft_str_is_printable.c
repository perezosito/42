/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:19:03 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 17:01:42 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	index;
	int	exit_value;

	index = 0;
	exit_value = 1;
	while (str[index] != '\0')
	{
		if (str[index] < 33 || str[index] > 126)
		{
			exit_value = 0;
		}
		index++;
	}
	return (exit_value);
}

int main(void)
{
	char src[] = "!hello~";
	int value = ft_str_is_printable(src);
 	printf("%d \n",value);

	char src99[] = "!hASSDllo~";
	int value99 = ft_str_is_printable(src99);
 	printf("%d \n",value99);

	char src1[] = "hel{\tlo";
	int value1 = ft_str_is_printable(src1);
 	printf("%d \n",value1);

	char src2[] = "hel-lo\n";
	int value2 = ft_str_is_printable(src2);
 	printf("%d \n",value2);

	char src4[] = "\vhel6lo";
	int value4 = ft_str_is_printable(src4);
 	printf("%d \n",value4);

	char src3[] = "";
	int value3 = ft_str_is_printable(src3);
 	printf("%d \n",value3);
	return (0);
}

