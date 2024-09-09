/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 02:12:42 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/15 02:12:51 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr <= 'Z' && *ptr >= 'A')
		{
			*ptr = *ptr +32;
		}
		ptr++;
	}
	return (str);
}
/* *str += 32; also works*/
/*
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
}*/
