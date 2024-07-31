/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 03:25:20 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/21 03:25:23 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ch_exa(char a)
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

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i <= size)
	{
		ch_exa(addr[i]);
	}
}
/*
int main ()
{
	int	*b;
	unsigned int	size;
	void	*addr[]=&b;
	
	while (addr[size] !='\0')
		size++;
	ft_print_memory(addr, size);}*/
