/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:14:38 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/17 18:58:23 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* 
 * Prints on the console all possible combinations of numbers
 * from 0 to 9 without repeating any of them.
 */
void	ft_print_comb(void)
{
	char	comb[3];

	comb[0] = '0';
	comb[1] = '1';
	comb[2] = '2';
	while (comb[0] <= '7')
	{
		while (comb[1] <= '8')
		{
			while (comb[2] <= '9')
			{
				write(1, &comb[0], 1);
				write(1, &comb[1], 1);
				write(1, &comb[2], 1);
				if (!(comb[0] == '7' && comb[1] == '8' && comb[2] == '9'))
					write(1, ", ", 2);
				comb[2]++;
			}
			comb[1]++;
			comb[2] = comb[1] + 1;
		}
		comb[1] = comb[0] + 1;
		comb[0]++;
	}
}
