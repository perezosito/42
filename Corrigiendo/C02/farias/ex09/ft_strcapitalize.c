/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:56:17 by farias            #+#    #+#             */
/*   Updated: 2024/07/18 16:04:34 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 32 && str[i - 1] <= 47)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 58 && str[i - 1] <= 64)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 91 && str[i - 1] <= 96)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 123 && str[i - 1] <= 126)
				str[i] = str[i] - 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
