/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:48:41 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/20 22:48:44 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_ascii(char a)
{
	if (a > 57 && a < 65)
		return (1);
	else
	{
		if (a < 48 || a > 122)
			return (1);
		else
		{
			if (a > 90 && a < 97)
				return (1);
		}
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	control;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str [0] - 32;
	while (str[i] != '\0')
	{
		control = check_ascii(str[i - 1]);
		if (control == 1 && (str[i] >= 97 && str[i] <= 122))
			str[i] = str [i] - 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main ()
{
	char str[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un HOLAAA HOL1ASD";
	*str=*ft_strcapitalize(str);
	printf("%s",str);
	return 0;
}
