/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:32:01 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/11 19:26:11 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	output;
	int		number;

	number = n;
	if (number >= 0)
	{
		output = 'P';
	}
	else
	{
		output = 'N';
	}
	write (1, &output, 1);
}

int	main(void)
{
	ft_is_negative(3);
	ft_is_negative(-3);
	ft_is_negative(0);
	return (0);
}
