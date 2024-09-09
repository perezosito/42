/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 21:11:45 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/13 21:11:48 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str > 'Z' || *str < 'A')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int main() {
    char *test1 = "HELLOWORLD";  // Debe devolver 1
    char *test2 = "Hello123";     // Debe devolver 0
    char *test3 = "";              // Debe devolver 1 (cadena vacía)
    char *test4 = "123";           // Debe devolver 0
    char *test5 = "GOODBYE";      // Debe devolver 1

    printf("Test 1: %s -> %d\n", test1, ft_str_is_uppercase(test1));
    printf("Test 2: %s -> %d\n", test2, ft_str_is_uppercase(test2));
    printf("Test 3: %s -> %d\n", test3, ft_str_is_uppercase(test3));
    printf("Test 4: %s -> %d\n", test4, ft_str_is_uppercase(test4));
    printf("Test 5: %s -> %d\n", test5, ft_str_is_uppercase(test5));

    return 0;
}*/