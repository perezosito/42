/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:46:22 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/20 21:46:26 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 120)
			return (0);
		i++;
	}
	return (1);
}

/*#include<stdio.h>
int main ()
{
	int control;
	char str[25]={'g','a','M','s','i','n','o','e','l','u','l','t','i','m','o'};;
	control =3;
	
	control = ft_str_is_lowercase(str);
	printf("%d",control);
	
}
*/
