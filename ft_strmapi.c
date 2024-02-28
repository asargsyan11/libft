/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:57:34 by asargsya          #+#    #+#             */
/*   Updated: 2024/02/01 14:31:32 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*new_str;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * (size + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(new_str + i) = (*f)(i, *(s + i));
		i++;
	}
	*(new_str + i) = '\0';
	return (new_str);
}
