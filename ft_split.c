/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamidou <rahmane2art@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:27:54 by aamidou           #+#    #+#             */
/*   Updated: 2022/11/09 22:20:20 by aamidou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while ((char )*(s + i) != c && *(s + i))
	{
		len++;
		s++;
	}
	return (len);
}

static void	ft_free(char **out, int j)
{
	while (j-- > 0)
		free(out[j]);
	free(out);
}

static char	**ft_copy(const char *s, char c, int word, char **out)
{
	int				j;
	int				len;
	unsigned int	i;

	i = 0;
	j = -1;
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		len = ft_word_len(s, c, i);
		out[j] = ft_substr(s, i, len);
		if (!out[j])
		{
			ft_free(out, j);
			return (0);
		}
		i += len;
	}
	out[j] = 0;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**out;

	if (!s)
		return (0);
	word = ft_count_word(s, c);
	out = (char **)malloc((word + 1) * sizeof(char *));
	if (!out)
		return (0);
	out = ft_copy(s, c, word, out);
	return (out);
}
