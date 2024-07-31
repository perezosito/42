/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:27:59 by jose-ang          #+#    #+#             */
/*   Updated: 2024/07/17 10:13:42 by jose-ang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int main() {
    char *test1 = "helloworld";  // Debe devolver 0
    char *test2 = "Hello123";     // Debe devolver 0
    char *test3 = "";              // Debe devolver 1 (cadena vacía)
    char *test4 = "123";           // Debe devolver 1
    char *test5 = "goodbye";      // Debe devolver 0

    printf("Test 1: %s -> %d\n", test1, ft_str_is_lowercase(test1));
    printf("Test 2: %s -> %d\n", test2, ft_str_is_lowercase(test2));
    printf("Test 3: %s -> %d\n", test3, ft_str_is_lowercase(test3));
    printf("Test 4: %s -> %d\n", test4, ft_str_is_lowercase(test4));
    printf("Test 5: %s -> %d\n", test5, ft_str_is_lowercase(test5));

    return 0;
}
