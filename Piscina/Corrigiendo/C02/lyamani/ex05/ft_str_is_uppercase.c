/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:56:55 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 13:17:45 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;
	int	exit_value;

	index = 0;
	exit_value = 1;
	while (str[index] != '\0')
	{
		if (str[index] < 65 || str[index] > 90)
		{
			exit_value = 0;
		}
		index++;
	}
	return (exit_value);
}

int main(void)
{
	char src[] = "SPRINGSBOOT";
	int value = ft_str_is_uppercase(src);
 	printf("%d \n",value);


	char src1[] = "12SD349?";
	int value1 = ft_str_is_uppercase(src1);
 	printf("%d \n",value1);


	char src2[] = "HEl12343";
	int value2 = ft_str_is_uppercase(src2);
 	printf("%d \n",value2);

	char src3[] = "hel6lTYoYH";
	int value3 = ft_str_is_uppercase(src3);
 	printf("%d \n",value3);

	char src4[] = "";
	int value4 = ft_str_is_uppercase(src4);
 	printf("%d \n",value4);
	return (0);
}

