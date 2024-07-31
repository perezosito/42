/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 05:14:56 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/23 05:14:59 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' ||s2[i] != '\0') && i <= n)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main ()
{
	int	output;
	//unsigned int	size=20; 
	char	s1[] = "(line: 25, cl: 1): Missig dent level";
	char	s2[] = "(line: 25, cl: 1): Missing dent level";
	
	
	output = ft_strncmp(s1,s2,5) ;
	printf("%d",output);
}		*/
