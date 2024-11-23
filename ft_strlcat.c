/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:59:04 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/11/16 14:00:12 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	total_len;
	size_t	copy_len;
	size_t	i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	total_len = d_len + s_len;
	if (dstsize == 0)
		return (s_len);
	if (d_len >= dstsize)
		return (s_len + dstsize);
	copy_len = dstsize - d_len - 1;
	i = 0;
	while (i < copy_len && src[i] != '\0')
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (total_len);
}
