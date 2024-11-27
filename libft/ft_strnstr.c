/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <yettalib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:59:03 by yettalib          #+#    #+#             */
/*   Updated: 2024/11/20 21:22:30 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && to_find && n == 0)
		return (NULL);
	if (to_find[i] == '\0')
	{
		return ((char *)(str));
	}
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < n)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)(str + i));
			j++;
		}
		i++;
	}
	return (0);
}
#include <string.h>
#include <stdio.h>

int main()
{
	char *to_find = "sdhj";
	printf("%s",strnstr(NULL, to_find, 1));
	return 0;
}
