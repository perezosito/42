/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 05:32:12 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/15 05:32:15 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
#include <stdio.h>
int main(void) {
    char *str1 = "hello";
    char *str2 = "hello";
    char *str3 = "world";
    char *str4 = "hell";
    char *str5 = "";
    char *str6 = "hello, world";

printf("Comparando '%s' y '%s': %d\n", str1, str2, ft_strncmp(str1, str2, 3));
printf("Comparando '%s' y '%s': %d\n", str1, str3, ft_strncmp(str1, str3, 3));
printf("Comparando '%s' y '%s': %d\n", str1, str4, ft_strncmp(str1, str4, 3));
printf("Comparando '%s' y '%s': %d\n", str1, str5, ft_strncmp(str1, str5, 3));
printf("Comparando '%s' y '%s': %d\n", str5, str1, ft_strncmp(str5, str1, 3));
printf("Comparando '%s' y '%s': %d\n", str1, str6, ft_strncmp(str1, str6, 3));

return 0;
}*/
