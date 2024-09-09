/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:08:55 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/25 13:06:38 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	exit_value;

	index = 0;
	exit_value = 1;
	while (str[index] != '\0')
	{
		if (str[index] < 65)
		{
			exit_value = 0;
		}
		else if (str[index] > 90 && str[index] < 97)
		{
			exit_value = 0;
		}
		else if (str[index] > 122)
		{
			exit_value = 0;
		}
		index++;
	}
	return (exit_value);
}

int main(void)
{
	char src[] = "hello";
	int value = ft_str_is_alpha(src);
 	printf("%d \n",value);


	char src1[] = "hel{lo";
	int value1 = ft_str_is_alpha(src1);
 	printf("%d \n",value1);


	char src2[] = "hel-lo";
	int value2 = ft_str_is_alpha(src2);
 	printf("%d \n",value2);

	char src4[] = "hel6lo";
	int value4 = ft_str_is_alpha(src4);
 	printf("%d \n",value4);


	char src3[] = "";
	int value3 = ft_str_is_alpha(src3);
 	printf("%d \n",value3);
	return (0);
}

