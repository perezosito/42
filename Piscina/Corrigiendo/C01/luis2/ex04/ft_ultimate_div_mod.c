/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:19:01 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/07/16 19:27:35 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <unistd.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b != 0)
	{
		temp = *a / *b;
		*b = *a % *b;
		*a = temp;
	}
}
	/*else
	{
		write (1, "Error: División por cero no permitida.", 39);
	}
}
	int	main(void)
{
	int a;
	int b;
	
	a = 10;
	b = 0;
	printf("Antes: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Después: a = %d, b = %d\n", a, b);
	return (0);
}*/
