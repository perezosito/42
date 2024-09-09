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
int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int main() {
    char *test1 = "HelloWorld";  // Debe devolver 1
    char *test2 = "Hello123";     // Debe devolver 0
    char *test3 = "";              // Debe devolver 1 (cadena vacía)
    char *test4 = "123";           // Debe devolver 0
    char *test5 = "Goodbye!";      // Debe devolver 0

    printf("Test 1: %s -> %d\n", test1, ft_str_is_alpha(test1));
    printf("Test 2: %s -> %d\n", test2, ft_str_is_alpha(test2));
    printf("Test 3: %s -> %d\n", test3, ft_str_is_alpha(test3));
    printf("Test 4: %s -> %d\n", test4, ft_str_is_alpha(test4));
    printf("Test 5: %s -> %d\n", test5, ft_str_is_alpha(test5));

    return 0;
}*/
