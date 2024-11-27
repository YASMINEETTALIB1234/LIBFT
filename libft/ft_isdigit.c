/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <yettalib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:31:56 by yettalib          #+#    #+#             */
/*   Updated: 2024/11/11 17:33:58 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	ch;

	if (c < 0 || c > 255)
		return (0);
	ch = (unsigned char)c;
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}
