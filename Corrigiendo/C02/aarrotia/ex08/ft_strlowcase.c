/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:09:42 by aarroita          #+#    #+#             */
/*   Updated: 2024/07/16 20:09:49 by aarroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
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
