/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:28:22 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/24 12:55:13 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Receives a pointer to an int as a parameter
 * and gives the value 42 to the int*/
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	num;

	num = 666;
	printf("Antes: %d\n", num);
	ft_ft(&num);
	printf("Después: %d\n", num);
	return (0);
}
