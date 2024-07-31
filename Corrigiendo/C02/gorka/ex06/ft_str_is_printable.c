/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:15:47 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/20 22:15:50 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}

#include<stdio.h>
int main ()
{
	int a;
	char str []= "edgrsdfs\ndgdh";
	a=ft_str_is_printable(str);
	printf("%d",a);
}
