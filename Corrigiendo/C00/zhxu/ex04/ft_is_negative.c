/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:45:44 by zhxu              #+#    #+#             */
/*   Updated: 2024/07/16 19:16:46 by zhxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else if (n < 0)
		write(1, "N", 1);
	write(1, "\n", 1);
}

int	main(void)
{
	ft_is_negative(-7);
		ft_is_negative(8);
			ft_is_negative(-1);
				ft_is_negative(32);
					ft_is_negative(0);
					
	return (0);
}

