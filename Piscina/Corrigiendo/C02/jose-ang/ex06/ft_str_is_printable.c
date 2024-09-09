/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:27:59 by jose-ang          #+#    #+#             */
/*   Updated: 2024/07/17 10:56:37 by jose-ang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
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
    char *test1 = "Hello, World!"; // Debe devolver 1
    char *test2 = "Hello\nWorld";   // Debe devolver 0
    char *test3 = "12345";           // Debe devolver 1
    char *test4 = "\tTab";           // Debe devolver 0
    char *test5 = "Goodbye!";        // Debe devolver 1

    printf("Test 1: %s -> %d\n", test1, ft_str_is_printable(test1));
    printf("Test 2: %s -> %d\n", test2, ft_str_is_printable(test2));
    printf("Test 3: %s -> %d\n", test3, ft_str_is_printable(test3));
    printf("Test 4: %s -> %d\n", test4, ft_str_is_printable(test4));
    printf("Test 5: %s -> %d\n", test5, ft_str_is_printable(test5));

    return 0;
}
