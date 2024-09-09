/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:09:45 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/24 13:08:59 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Receives as parameter a pointer to a pointer to a pointer
 * to a pointer to a pointer to a pointer to a pointer to a pointer
 * to a pointer to a pointer to a pointer to a pointer to a pointer
 * to a pointer to a pointer to a pointer to a pointer to a pointer
 * to a pointer to an int and gives the the value 42 to the int */
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int num;
	int *pointer1;
	int **pointer2;
	int ***pointer3;
	int ****pointer4;
	int *****pointer5;
	int ******pointer6;
	int *******pointer7;
	int ********pointer8;
	int *********pointer9;

	num = 666;
	pointer1 = &num;
	pointer2 = &pointer1;
	pointer3 = &pointer2;
	pointer4 = &pointer3;
	pointer5 = &pointer4;
	pointer6 = &pointer5;
	pointer7 = &pointer6;
	pointer8 = &pointer7;
	pointer9 = &pointer8;
	printf("Antes: %d\n", num);
	ft_ultimate_ft(pointer9);
	printf("Después: %d\n", num);
}
