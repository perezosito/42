/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:08:56 by aarroita          #+#    #+#             */
/*   Updated: 2024/07/16 20:09:05 by aarroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
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
