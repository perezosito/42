/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 21:11:45 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/15 02:02:24 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr <= 'z' && *ptr >= 'a')
		{
			*ptr = *ptr -32;
		}
		ptr++;
	}
	return (str);
}
/*
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
*/
