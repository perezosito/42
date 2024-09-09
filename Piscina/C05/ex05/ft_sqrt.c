/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:07:18 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/29 15:07:19 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
	{
		return (0);
	}
	while ((x * x) < nb)
	{
		x++;
	}
	if ((x * x) > nb)
	{
		return (0);
	}
	return (x);
}
/*
#include <stdio.h>
int main()
{
    int number;
    int result;

    printf("Ingrese un número para encontrar su raíz cuadrada: ");
    scanf("%d", &number);

    result = ft_sqrt(number);

    if (result == 0)
        printf("El número %d no tiene una raíz cuadrada exacta.\n", number);
    else
        printf("La raíz cuadrada de %d es %d.\n", number, result);

    return 0;
}
*/
