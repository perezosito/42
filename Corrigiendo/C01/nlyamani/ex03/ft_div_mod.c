/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:40:07 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/18 17:41:01 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
#include <stdio.h>
int main(void)
{
	int a = 17;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("División de %d por %d es %d con residuo %d\n", a, b, div, mod);

	return (0);
}
