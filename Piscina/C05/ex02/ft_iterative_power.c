/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:59:36 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/25 18:49:46 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		i = (i * nb);
		power--;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	int number = 4;
	int power = 8;
	int result = ft_iterative_power(number, power);
	printf("El resultado de elevar %d a %d es %d\n", number, power, result);
	return 0;
}*/
