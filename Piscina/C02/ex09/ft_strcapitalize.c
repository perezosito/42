/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 02:49:33 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/15 03:53:09 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	char	prev;
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		prev = *(ptr - 1);
		if (prev < 'A' || (prev > 'Z' && prev < 'a') || prev > 'z')
		{
			if ((prev < '0' || prev > '9') && (*ptr >= 'a' && *ptr <= 'z'))
				*ptr -= 32;
		}
		else
		{
			if ((prev > '0' || prev < '9') && (*ptr >= 'A' && *ptr <= 'Z'))
				*ptr += 32;
		}
		ptr++;
	}
	return (str);
}

/*#include <stdio.h>
int main(void) {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("Original: %s\n", str);
    printf("Capitalized: %s\n", ft_strcapitalize(str));

    return 0;
}*/
