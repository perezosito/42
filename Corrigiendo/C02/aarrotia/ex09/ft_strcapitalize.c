/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:15:01 by aarroita          #+#    #+#             */
/*   Updated: 2024/07/16 20:15:08 by aarroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		i1;

	i = 0;
	i1 = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i1 == 1)
			{
				str[i] -= 32;
				i1 = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			i1 = 0;
		else
			i1 = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main(void) {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un HOLAAA HOL1AAA hol1A";

    printf("Original: %s\n", str);
    printf("Capitalized: %s\n", ft_strcapitalize(str));

    return 0;
}
