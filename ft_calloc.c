/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:53:43 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/11/16 17:01:40 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*calloc(size_t num, size_t size)
{
	size_t			total_size;
	size_t			i;
	void			*ptr;
	unsigned char	*p;

	i = 0;
	total_size = num * size;
	*ptr = malloc(total_size);
	*p = ptr;
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
