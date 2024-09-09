/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:54:33 by jose-ang          #+#    #+#             */
/*   Updated: 2024/07/20 19:25:07 by jose-ang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nw;

	nw = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (nw && str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
			nw = 0;
		}
		else if (!nw && str[i] > 64 && str[i] < 91)
			str[i] += 32;
		else if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90)
			&& (str[i] < 48 || str[i] > 57))
			nw = 1;
		else
			nw = 0;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main(void) {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un HOLAA HOL1ASDSAD SD tyt3asdasd12676ASDSAD";

    printf("Original: %s\n", str);
    printf("Capitalized: %s\n", ft_strcapitalize(str));

    return 0;
}
