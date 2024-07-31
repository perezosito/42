/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jon-fern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:14:19 by jon-fern          #+#    #+#             */
/*   Updated: 2024/07/17 15:53:37 by jon-fern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0'
		&& s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>
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
}
