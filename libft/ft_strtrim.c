/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <yettalib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:32:04 by yettalib          #+#    #+#             */
/*   Updated: 2024/11/12 14:28:14 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*end;
	size_t		len;
	char		*trimmed;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	while (is_in_set(*s1, set))
		s1++;
	end = s1 + ft_strlen(s1);
	while (end > s1 && is_in_set(*(end - 1), set))
		end--;
	len = end - s1;
	trimmed = (char *)malloc(len + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, s1, len + 1);
	trimmed[len] = '\0';
	return (trimmed);
}
