/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 04:53:29 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/23 04:53:38 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main()
{
    int output;
    char    s1[]="Code,  Run and";
    char    s2[]="Code, , Run and";
    output=ft_strcmp(s1,s2);
    printf("%d",output);
    return 0;
}
