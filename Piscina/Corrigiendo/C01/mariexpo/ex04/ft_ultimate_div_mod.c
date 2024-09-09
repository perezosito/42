/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariexpo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 22:56:16 by mariexpo          #+#    #+#             */
/*   Updated: 2024/07/28 22:56:28 by mariexpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}

int	main(void)
{
	int	a;
        int	b;

	a = 42;
	b = 5;
	
	ft_ultimate_div_mod( &a, &b);

	printf("Division de 'a' entre 'b' es:  %d con residuo %d\n", a, b);

	return (0);
}
