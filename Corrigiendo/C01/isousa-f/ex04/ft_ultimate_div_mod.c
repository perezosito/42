/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:33:41 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/25 13:08:06 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Divides the int pointed to by a and b. The result of the division
 * is stored in the int pointed to a. The remainder of the result
 * of the division is stored in the int pointed to b */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 13;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("División: %d\n", a);
	printf("Módulo: %d\n", b);
	return (0);
}
