/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:42:57 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/18 17:44:58 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div ;
	*b = mod;
}
#include <stdio.h>
int main(void)
{
	int	a;
	int	b;

	a = 17;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("División de 'a' entre 'b' es %d con residuo %d\n", a, b);
	return (0);
}
