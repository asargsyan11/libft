/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:28:52 by asargsya          #+#    #+#             */
/*   Updated: 2024/02/08 12:20:27 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*case_check(const char *haystack, const char *needle)
{
	int	index;
	int	index2;

	index = 0;
	while (haystack[index] != '\0')
	{
		if (haystack[index] == needle[0])
		{
			index2 = 0;
			while (needle[index2] && haystack[index + index2]
				&& haystack[index + index2] == needle[index2])
				index2++;
			if (needle[index2] == '\0')
				return ((char *)haystack + index);
		}
		index++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if ((!haystack || !needle) && len == 0)
		return (0);
	if (needle[i] == '\0')
		return ((char *)haystack);
	if ((int)len < 0)
		return (case_check(haystack, needle));
	while (haystack[i] != '\0' && i < (int)len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && haystack[i + j] && i + j < (int)len
				&& haystack[i + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
