/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narrospi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:19:12 by narrospi          #+#    #+#             */
/*   Updated: 2024/07/24 15:52:45 by narrospi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			c = i / 10 + '0';
			write (1, &c, 1);
			c = i % 10 + '0';
			write (1, &c, 1);
			write (1, " ", 1);
			c = j / 10 + '0';
			write (1, &c, 1);
			c = j % 10 + '0';
			write (1, &c, 1);
			if (i != 98 || j != 99)
				write (1, ", ", 2);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
