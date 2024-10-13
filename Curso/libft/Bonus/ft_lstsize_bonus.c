/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:07:54 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 16:07:56 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstsize.c
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return count;
}

