/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <yettalib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:59:06 by yettalib          #+#    #+#             */
/*   Updated: 2024/11/11 16:52:58 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	char	ch;

	ch = (char) character;
	while (*str != '\0')
	{
		if (*str == ch)
		{
			return ((char *)str);
		}
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (NULL);
}
