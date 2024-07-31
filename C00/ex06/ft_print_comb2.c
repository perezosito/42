/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:25:38 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/11 20:25:42 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	digit1;
	char	digit2;
	char	digit3;
	char	digit4;

	digit1 = '0';
	while (digit1 <= '9')
	{
		digit2 = '0';
		while (digit2 <= '9')
		{
			digit3 = '0';
			while (digit3 <= '9')
			{
				digit4 = '0';
				while (digit4 <= '9')
				{
					write(1, &digit1, 1);
					write(1, &digit2, 1);
					write(1, " ", 1);
					write(1, &digit3, 1);
					write(1, &digit4, 1);
					digit4++;
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
