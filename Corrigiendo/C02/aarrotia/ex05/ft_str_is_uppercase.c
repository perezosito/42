/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:06:14 by aarroita          #+#    #+#             */
/*   Updated: 2024/07/16 20:06:34 by aarroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int main() {
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
}
