/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asargsya <asargsya@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:11:16 by asargsya          #+#    #+#             */
/*   Updated: 2024/02/07 15:26:22 by asargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(const char *str, char c)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*return_s1(const char *s1)
{
	char	*result;
	int		index;

	result = (char *)malloc(sizeof(char) * ((int)ft_strlen(s1) + 1));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (*(s1 + index) != '\0')
	{
		*(result + index) = *(s1 + index);
		index++;
	}
	*(result + index) = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_index;
	int		end_index;
	int		index;
	char	*new_str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (new_str = return_s1(s1));
	start_index = 0;
	while (s1[start_index] && check_char(set, s1[start_index]))
		start_index++;
	end_index = ft_strlen(s1);
	while (end_index > start_index && check_char(set, s1[end_index - 1]))
		end_index--;
	new_str = (char *)malloc(sizeof(char) * (end_index - start_index + 1));
	if (new_str == NULL)
		return (NULL);
	index = 0;
	while (start_index < end_index)
		new_str[index++] = s1[start_index++];
	new_str[index] = '\0';
	return (new_str);
}
