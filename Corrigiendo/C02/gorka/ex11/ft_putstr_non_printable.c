/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 00:08:13 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/21 00:08:15 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ch_exa(int a)
{
	char	aux[16];
	char	exa[2];
	int		i;

	i = 0;
	while (i < 15)
	{
		if (i <= 9)
			aux[i] = i + '0';
		else
			aux[i] = i - 10 + 'a';
		i++;
	}
	exa[1] = aux[a % 15];
	exa[0] = aux[a / 15];
	write (1, &exa[0], 1);
	write (1, &exa[1], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
			ch_exa(str[i]);
		else
			write (1, &str[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
int main ()
{
	char	str[]="./a.out c2r7s2% c\bc -Werr\nor";
	ft_putstr_non_printable(str);
}*/
