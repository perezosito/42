/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jon-fern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:14:19 by jon-fern          #+#    #+#             */
/*   Updated: 2024/07/28 18:33:01 by jon-fern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
		i++;
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

printf("Comparando '%s' y '%s': %d\n", str1, str2, ft_strncmp(str1, str2, 3));
printf("Comparando '%s' y '%s': %d\n", str1, str3, ft_strncmp(str1, str3, 3));
printf("Comparando '%s' y '%s': %d\n", str1, str4, ft_strncmp(str1, str4, 3));
printf("Comparando '%s' y '%s': %d\n", str1, str5, ft_strncmp(str1, str5, 3));
printf("Comparando '%s' y '%s': %d\n", str5, str1, ft_strncmp(str5, str1, 3));
printf("Comparando '%s' y '%s': %d\n", str1, str6, ft_strncmp(str1, str6, 3));

return 0;
}
