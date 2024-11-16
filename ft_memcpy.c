/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:32:36 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/11/16 14:49:51 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	*d = dest;
	*s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
