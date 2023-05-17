/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:23:30 by yachen            #+#    #+#             */
/*   Updated: 2023/05/17 15:53:22 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*new_s;

	j = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	new_s = (char *)malloc((len + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	while (j < len && s[j])
	{
		new_s[j] = s[j + start];
		j++;
	}
	new_s[j] = '\0';
	return (new_s);
}
/*
#include <stdio.h>

int	main()
{
	//char	str[] = "il fait beau";
	char	*ptr = ft_substr("0123456789", 9, 10);
	printf("%zu", ft_strlen(ptr));
	free(ptr);
}

*/
