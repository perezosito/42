/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:17:53 by aarroita          #+#    #+#             */
/*   Updated: 2024/07/15 19:17:58 by aarroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	mod;

	division = *a / *b;
	mod = *a % *b;
	*a = division;
	*b = mod;
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
}

#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 17;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("División de 'a' entre 'b' es %d con residuo %d\n", a, b);
	return (0);
