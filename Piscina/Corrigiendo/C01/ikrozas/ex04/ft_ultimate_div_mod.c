/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrozas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:33:37 by ikrozas           #+#    #+#             */
/*   Updated: 2024/07/15 14:56:52 by ikrozas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	value1;
	int	value2;

	value1 = *a;
	value2 = *b;
	*a = value1 / value2;
	*b = value1 % value2;
}

/*int	main(void)
{
	int	num1;
	int	num2;

	num1 = 45;
	num2 = 5;
	printf("Previo a función: num1 = %d, num2 = %d\n", num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("Tras la función: num1 = %d, num2 = %d\n", num1, num2);
	return (0);
}*/
