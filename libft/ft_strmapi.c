/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <yettalib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:42:09 by yettalib          #+#    #+#             */
/*   Updated: 2024/11/05 17:00:40 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*result;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	result = (char *)malloc(i + 1);
	if (result == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		result[j] = f(j, s[j]);
		j++;
	}
	result[i] = '\0';
	return (result);
}
