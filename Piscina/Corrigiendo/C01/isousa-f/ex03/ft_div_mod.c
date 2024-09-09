/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:17:21 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/25 13:07:30 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Divides the two parameters a and b and savess the result
 *in the int pointed to by div. Also stores the remainder of the division
 *of a and b in the int pointed to by mod*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 17;
	b = 5;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("División: %d\n", a);
	printf("Módulo: %d\n", b);
	return(0);
}
