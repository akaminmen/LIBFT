/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:04:45 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/11/23 13:04:59 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t	num, size_t	size)
{
	unsigned char	*p;
	size_t			total_size;
	size_t			i;
	void			*ptr;

	i = 0;
	total_size = num * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	p = ptr;
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
