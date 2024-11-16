/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:36:30 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/11/16 14:03:03 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s = str;

	while (n--)
	{
		if (*s == (unsigned char)c)
		{
			return ((void *)s);
		}
		s++;
	}
	return (NULL);
}
