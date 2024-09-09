/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_file_content.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jon-fern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:37:18 by jon-fern          #+#    #+#             */
/*   Updated: 2024/07/28 19:01:22 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_FILE_CONTENT_H
# define HANDLE_FILE_CONTENT_H

void	ft_writemsg(void);
char	*get_file_content(char *path);
char	*get_key(char *str, char *key);
char	*get_value(char *str, char *value);
int		is_num_or_alpha(char c);
#endif
