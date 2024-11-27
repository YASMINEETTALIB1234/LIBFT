/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <yettalib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:44:14 by yettalib          #+#    #+#             */
/*   Updated: 2024/11/09 18:25:09 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_length(int nbr)
{
	int		len;
	long	nb;

	len = 0;
	nb = nbr;
	if (nbr == 0)
		len++;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		nb_len;
	long	nb;
	char	*tab;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	nb_len = get_length(nbr);
	tab = (char *)malloc((nb_len + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	tab[nb_len] = '\0';
	nb = nbr;
	if (nbr == 0)
		tab[0] = '0';
	if (nbr < 0)
	{
		tab[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		tab[--nb_len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (tab);
}
