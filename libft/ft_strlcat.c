/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <yettalib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:47:55 by yettalib          #+#    #+#             */
/*   Updated: 2024/11/11 17:31:56 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len1;

	if (!dest && size == 0)
		return (ft_strlen(src));
	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	len1 = i;
	if (i >= size)
		return (len1 + ft_strlen(src));
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len1 + ft_strlen(src));
}
