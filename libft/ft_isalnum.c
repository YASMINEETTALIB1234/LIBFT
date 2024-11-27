/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <yettalib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:14:08 by yettalib          #+#    #+#             */
/*   Updated: 2024/11/11 17:33:35 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	ch;

	if (c < 0 || c > 255)
		return (0);
	ch = (unsigned char)c;
	if (ft_isalpha(ch) || ft_isdigit(ch))
		return (1);
	return (0);
}
