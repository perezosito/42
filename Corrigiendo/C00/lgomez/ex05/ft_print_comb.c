/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:07:43 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/07/11 20:13:16 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	digits[5];
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				digits[0] = i;
				digits[1] = j;
				digits[2] = k;
				if (i == '7' && j == '8' && k == '9')
					write(1, digits, 3);
				else
				{
					digits[3] = ',';
					digits[4] = ' ';
					write(1, digits, 5);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}
int	main(void)
{
	ft_print_comb();
	return (0);
}
