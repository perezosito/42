/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:26:26 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/07/16 12:32:04 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	t_block(int t)
{
	int	a;
	int	b;

	a = t / 10 + 48;
	b = t % 10 + 48;
	write (1, &a, 1);
	write (1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = 1;
		while (y <= 99)
		{
			if (x >= y)
				y++;
			else
			{
				t_block(x);
				write (1, " ", 1);
				t_block(y);
				if (x != 98 || y != 99)
				{
					write (1, ", ", 2);
					y++;
				}
			}
		}
		x++;
	}
}
