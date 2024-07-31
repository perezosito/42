/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:44:08 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 13:07:40 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	index;
	int	exit_value;

	index = 0;
	exit_value = 1;
	while (str[index] != '\0')
	{
		if (str[index] < 48 || str[index] > 57)
		{
			exit_value = 0;
		}
		index++;
	}
	return (exit_value);
}

int main(void)
{
	char src[] = "123456789";
	int value = ft_str_is_numeric(src);
 	printf("%d \n",value);


	char src1[] = "12349?";
	int value1 =  ft_str_is_numeric(src1);
 	printf("%d \n",value1);


	char src2[] = "hel12343";
	int value2 =  ft_str_is_numeric(src2);
 	printf("%d \n",value2);

	char src3[] = "hel6lo";
	int value3 =  ft_str_is_numeric(src3);
 	printf("%d \n",value3);

	char src4[] = "";
	int value4 =  ft_str_is_numeric(src4);
 	printf("%d \n",value4);
	return (0);
}

