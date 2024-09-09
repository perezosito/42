/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:07:25 by aarroita          #+#    #+#             */
/*   Updated: 2024/07/16 20:07:42 by aarroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str [i] <= 126))
		{
			return (0);
		}
		i++;
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
