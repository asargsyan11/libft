/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:50:20 by asargsya          #+#    #+#             */
/*   Updated: 2024/02/07 15:20:33 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_index;
	size_t	dest_index;
	size_t	di;
	size_t	si;

	if (!dst && !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	dest_index = ft_strlen(dst);
	src_index = ft_strlen(src);
	if (dst && dest_index > dstsize)
		return (dstsize + src_index);
	si = 0;
	di = dest_index;
	while (*(src + si) != '\0' && di + 1 < dstsize)
	{
		*(dst + di) = *(src + si);
		si++;
		di++;
	}
	*(dst + di) = '\0';
	return (dest_index + src_index);
}
