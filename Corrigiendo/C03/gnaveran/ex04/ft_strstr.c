/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:19:23 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/25 08:19:25 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*output(char *str, char *to_find, int i, int j)
{
	if (str[i] == '\0' && to_find[j] != '\0')
		return (NULL);
	else
		return (str);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = 0;
	aux = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (aux == 0)
				aux = i;
			j++;
		}
		else if (to_find[j] != '\0')
		{
			j = 0;
			aux = 0;
		}
		i++;
	}
	if (str[i] == '\0' && to_find[j] == '\0')
		return (&str[aux]);
	return (output(str, to_find, i, j));
}
/*
#include <stdio.h>
int main ()
{
	char str[]="Werror -Wall -Wextra";
	char to_find[]="";
	char *a;
	
	
	a=ft_strstr(str,to_find);
	printf("%s",a);
}*/
