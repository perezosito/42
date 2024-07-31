/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:42:24 by ecousill          #+#    #+#             */
/*   Updated: 2024/07/12 11:21:23 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = '0';
	digit2 = '1';
	digit3 = '2';
	while (digit1 <= '9')
	{
		write(1, &digit1, 1);
		
		if (digit2 <= '9')
		{
		write(1, &digit2, 1);
		digit2++;
			if (digit3 <= '9')
			{
				write(1, &digit3, 1);
				digit3++;
			}
			
		}
		write(1, ", ", 1);
		digit1++;
	}

}

int	main(void)
{
	ft_print_comb();
	return (0);
}
