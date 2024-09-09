/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:50:52 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 13:09:08 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;
	int	exit_value;

	index = 0;
	exit_value = 1;
	while (str[index] != '\0')
	{
		if (str[index] < 97 || str[index] > 122)
		{
			exit_value = 0;
		}
		index++;
	}
	return (exit_value);
}

int main(void)
{
	char src1[] = "haGel{lo";
	int value1 = ft_str_is_lowercase(src1);
 	printf("%d \n",value1);


	char src2[] = "helYlo";
	int value2 =  ft_str_is_lowercase(src2);
 	printf("%d \n",value2);

	char src[] = "hello";
	int value = ft_str_is_lowercase(src);
 	printf("%d \n",value);


	char src3[] = "hel6loT";
	int value3 =  ft_str_is_lowercase(src3);
 	printf("%d \n",value3);

	char src4[] = "";
	int value4 =  ft_str_is_lowercase(src4);
 	printf("%d \n",value4);
	return (0);
}
