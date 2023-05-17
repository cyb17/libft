/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:10:21 by yachen            #+#    #+#             */
/*   Updated: 2023/05/08 17:41:45 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(element * size * sizeof(char));
	if (!ptr || element == 0 || size == 0)
		return (ptr);
	if (element == SIZE_MAX || size == SIZE_MAX)
	{
		free(ptr);
		return (0);
	}
	ft_memset(ptr, 0, element * size);
	return (ptr);
}
/*
#include <stdio.h>
#include <stdint.h>
int	main()
{
	void	*ptr;

	ptr = ft_calloc(SIZE_MAX, SIZE_MAX);
	printf("%p", ptr);
	free(ptr);
}
*/