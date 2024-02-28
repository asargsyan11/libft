/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:18:44 by asargsya          #+#    #+#             */
/*   Updated: 2024/02/07 15:44:45 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s2_index;
	int		index;
	char	*joined_str;

	if (!s1 || !s2)
		return (NULL);
	joined_str = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (joined_str == NULL)
		return (NULL);
	index = 0;
	while (*(s1 + index) != '\0')
	{
		*(joined_str + index) = *(s1 + index);
		index++;
	}
	s2_index = 0;
	while (*(s2 + s2_index) != '\0')
	{
		*(joined_str + index) = *(s2 + s2_index);
		s2_index++;
		index++;
	}
	*(index + joined_str) = '\0';
	return (joined_str);
}
