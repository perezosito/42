/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:10:25 by aarroita          #+#    #+#             */
/*   Updated: 2024/07/15 19:10:34 by aarroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	keeper;

	keeper = *a;
	*a = *b;
	*b = keeper;
}



void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
}
#include <stdio.h>
int	main(void)
{
	int x = 5;
	int y = 10;

	printf("Antes del intercambio: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("Después del intercambio: x = %d, y = %d\n", x, y);

	return (0);
