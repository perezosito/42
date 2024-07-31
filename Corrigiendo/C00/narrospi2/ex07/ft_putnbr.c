/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narrospi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:54:41 by narrospi          #+#    #+#             */
/*   Updated: 2024/07/25 10:37:57 by narrospi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	char	temp[50];
	int		i;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	i = 0;
	while (nb > 0)
	{
		temp[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	while (i >= 0)
	{
		c = temp[i];
		write (1, &c, 1);
		i--;
	}
}

int	main(void)
{
	ft_putnbr(-6245);
	ft_putnbr(-2147483648);
}
