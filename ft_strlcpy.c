/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:34:32 by asargsya          #+#    #+#             */
/*   Updated: 2024/02/01 11:39:26 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	answer;

	index = 0;
	answer = ft_strlen(src);
	if (src == NULL)
		return ((size_t) NULL);
	if (dstsize < 1)
		return (answer);
	while (*(src + index) != '\0' && index < dstsize - 1)
	{
		*(dst + index) = *(src + index);
		index++;
	}
	*(dst + index) = '\0';
	return (answer);
}
