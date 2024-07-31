/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:02:33 by ecousill          #+#    #+#             */
/*   Updated: 2024/07/29 14:02:35 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
#include <stdio.h>
int	main(void)
{
	int	number = 2;
	int	power = 2;
	printf("%d elevado a %d es: %d\n", number, power, 
		ft_recursive_power(number, power));
	return (0);
}
