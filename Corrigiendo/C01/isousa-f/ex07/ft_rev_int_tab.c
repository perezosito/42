/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:12:24 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/24 16:58:19 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Inverts an array of integers. Input parameters: A pointer to int
 * and the size of the array */
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	array_size = 5;
	int	array[array_size];
	int	i;
	
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;

	i = 0;

	//Imprime antes de invertir
	printf("Antes de invertir:\n");
	while (i < array_size)
        {
                printf("%d", array[i]);
		i++;
        }

	//Ejecuta la función
	ft_rev_int_tab(array, array_size);
	//Imprime después de invertir
	i = 0;
        printf("\nDespués de invertir:\n");
	while (i < array_size)
	{
		printf("%d", array[i]);
		i++;
	}
	return(0);
}
