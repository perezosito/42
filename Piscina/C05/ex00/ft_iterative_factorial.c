/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:59:36 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/24 16:10:53 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		i = (i * nb);
		nb--;
	}
	return (i);
}
/*
int main(void)
{
	int number = 12;
	int result = ft_iterative_factorial(number);
	printf("El factorial de %d es %d\n", number, result);
	return 0;
}*/
