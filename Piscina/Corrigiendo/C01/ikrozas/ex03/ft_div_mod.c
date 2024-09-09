/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrozas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:29:11 by ikrozas           #+#    #+#             */
/*   Updated: 2024/07/15 12:50:18 by ikrozas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	a = 15;
	int	b = 2;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("División: %d\n", div);
	printf("Resto: %d\n", mod);
	return (0);
}*/
