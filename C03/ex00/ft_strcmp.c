/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 05:32:12 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/15 05:32:15 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>
int main(void) {
    char *str1 = "hello";
    char *str2 = "hello";
    char *str3 = "world";
    char *str4 = "hell";
    char *str5 = "";
    char *str6 = "hello, world";

    printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("Comparing '%s' and '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
    printf("Comparing '%s' and '%s': %d\n", str1, str4, ft_strcmp(str1, str4));
    printf("Comparing '%s' and '%s': %d\n", str1, str5, ft_strcmp(str1, str5));
    printf("Comparing '%s' and '%s': %d\n", str5, str1, ft_strcmp(str5, str1));
    printf("Comparing '%s' and '%s': %d\n", str1, str6, ft_strcmp(str1, str6));

    return 0;
}*/
