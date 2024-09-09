/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariexpo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:54:02 by mariexpo          #+#    #+#             */
/*   Updated: 2024/07/28 21:56:33 by mariexpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 15;
	printf ("Antes del intercambio: x =%d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf ("Despues del intercambio: x = %d, y  =%d\n", x, y);
	return (0);
}
