/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perzugaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:38:16 by perzugaz          #+#    #+#             */
/*   Updated: 2024/07/20 14:08:23 by perzugaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main()
{
    int num1 = 10;
    int num2 = 3;

    printf("Antes de ft_ultimate_div_mod: num1 = %d, num2 = %d\n", num1, num2);
    ft_ultimate_div_mod(&num1, &num2);
    printf("Después de ft_ultimate_div_mod: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
