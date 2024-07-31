/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:05:21 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/24 13:16:20 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Exchanges the contents of two integers
 * whose addresses are used as parameters*/
void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*pointer1; //Declaración de puntero 1
	int	*pointer2; //Declaraión de puntero 2
	
	//Inicializamos las variables
	a = 5;
	b = 3;

	//Inicializamos los punteros haciendo que
	//apunten a la dirección de memoria de las varables
	pointer1 = &a;
	pointer2 = &b;
	
	//Imprimimos por pantalla para comprobar si la función
	//hace lo que tiene que hacer
	printf("Before: a = %d and b = %d\n", a, b);
	ft_swap(pointer1, pointer2);
	printf("After: a = %d and b = %d\n", a, b);
}
