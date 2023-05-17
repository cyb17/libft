/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:09:33 by yachen            #+#    #+#             */
/*   Updated: 2023/05/15 18:08:21 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	int	count;
	int	trigger;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (count);
}

static char	*ft_copyword(char const *s, size_t start_i, size_t end_i)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end_i - start_i + 1));
	if (!word)
		return (0);
	while (start_i < end_i)
	{
		word[i] = s[start_i];
		i++;
		start_i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split2(char const*s, char c, char **tab)
{
	size_t	i;
	int		j;
	int		index;

	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			tab[j++] = ft_copyword(s, index, i);
			index = -1;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!s || !tab)
		return (NULL);
	return (ft_split2(s, c, tab));
}
/*
#include <stdio.h>

int	main()
{
	size_t	i;
	char	**tab = ft_split("", ' ');
	
	while (tab[i])
		{
			printf("%s\n", tab[i]);
			free(tab[i]);
			i++;
		}
	free(tab);
}
*/