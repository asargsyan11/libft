/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:36:02 by asargsya          #+#    #+#             */
/*   Updated: 2024/01/19 14:34:44 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (!dst && !src && !len)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len--)
		*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	return (dst);
}
