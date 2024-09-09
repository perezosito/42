/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:25:27 by jose-ang          #+#    #+#             */
/*   Updated: 2024/07/15 19:38:01 by jose-ang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] > 64 && str[count] < 91)
		{
			str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}

#include <stdio.h>
int main() {
    char str1[] = "HELLO WORLD";
    char str2[] = "HELLO123";
    char str3[] = "ABC!";
    char str4[] = "";
    char str5[] = "12345";

    ft_strlowcase(str1);
    ft_strlowcase(str2);
    ft_strlowcase(str3);
    ft_strlowcase(str4);
    ft_strlowcase(str5);

    printf("Lowcase: %s\n", str1);
    printf("Lowcase: %s\n", str2);
    printf("Lowcase: %s\n", str3);
    printf("Lowcase: %s\n", str4);
    printf("Lowcase: %s\n", str5);

    return 0;
}
