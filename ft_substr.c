/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:27:29 by asargsya          #+#    #+#             */
/*   Updated: 2024/02/07 14:49:22 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr_ft;
	size_t	index;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr_ft = (char *)malloc(sizeof(char) * (len + 1));
	if (substr_ft == NULL)
		return (NULL);
	index = 0;
	while (*(s + start) != '\0' && index < len)
	{
		*(substr_ft + index) = *(s + start);
		start++;
		index++;
	}
	*(substr_ft + index) = '\0';
	return (substr_ft);
}
