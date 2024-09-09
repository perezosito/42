/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:25:27 by jose-ang          #+#    #+#             */
/*   Updated: 2024/07/15 19:35:51 by jose-ang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] > 96 && str[count] < 123)
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}
#include <stdio.h>
int main() {
    char str1[] = "hello world";
    char str2[] = "Hello123";
    char str3[] = "abc!";
    char str4[] = "";
    char str5[] = "12345";

    ft_strupcase(str1);
    ft_strupcase(str2);
    ft_strupcase(str3);
    ft_strupcase(str4);
    ft_strupcase(str5);

    printf("Uppercase: %s\n", str1);
    printf("Uppercase: %s\n", str2);
    printf("Uppercase: %s\n", str3);
    printf("Uppercase: %s\n", str4);
    printf("Uppercase: %s\n", str5);

    return 0;
}
