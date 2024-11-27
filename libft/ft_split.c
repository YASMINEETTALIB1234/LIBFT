/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <yettalib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:51:11 by yettalib          #+#    #+#             */
/*   Updated: 2024/11/11 17:31:45 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count_w;
	int	i;

	count_w = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count_w += 1;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count_w);
}

static char	*copy_w(const char *s, char c)
{
	size_t	i;
	char	*word_ch;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word_ch = (char *)malloc(i + 1);
	if (!word_ch)
		return (0);
	ft_strlcpy(word_ch, s, i + 1);
	return (word_ch);
}

static void	free1(char **resulta)
{
	size_t	i;

	i = 0;
	while (resulta[i])
	{
		free(resulta[i]);
		i++;
	}
	free(resulta);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	size_t	i;
	char	**result;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (0);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		result[i] = copy_w(s, c);
		if (!result[i])
			return (free1(result), NULL);
		s += ft_strlen(result[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
