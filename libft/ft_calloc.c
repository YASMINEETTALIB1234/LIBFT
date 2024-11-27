/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <yettalib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:48:37 by yettalib          #+#    #+#             */
/*   Updated: 2024/11/05 17:11:15 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size)
{
	size_t			taille;
	unsigned char	*ptr;

	taille = num_elements * size;
	if (num_elements && taille / num_elements != size)
		return (NULL);
	ptr = malloc(taille);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, taille);
	return (ptr);
}
