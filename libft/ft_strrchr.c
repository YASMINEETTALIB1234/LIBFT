/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <yettalib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:27:06 by yettalib          #+#    #+#             */
/*   Updated: 2024/11/08 20:23:35 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*last_occr;

	last_occr = NULL;
	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			last_occr = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return ((char *)last_occr);
}
