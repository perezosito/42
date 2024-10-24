/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:49:20 by jose-ang          #+#    #+#             */
/*   Updated: 2024/07/15 19:06:11 by jose-ang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	while (num[0] <= '7' || num[1] <= '8' || num[2] <= '9')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write (1, &num[0], 1);
				write (1, &num[1], 1);
				write (1, &num[2], 1);
				if (num[0] != '7' || num[1] != '8' || num[2] != '9')
				{
					write(1, ", ", 2);
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
