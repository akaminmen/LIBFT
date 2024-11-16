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
#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t d_len = my_strlen(dest);
	size_t s_len = my_strlen(src);
	size_t total_len = d_len + s_len;

	if (d_len < dstsize - 1)
	{
		size_t copy_len = dstsize - d_len - 1;
        size_t i = 0;
        while (i < copy_len && src[i] != '\0') {
            dest[d_len + i] = src[i];
            i++;
        }
        dest[d_len + i] = '\0';
    }

    return (d_len >= dstsize) ? s_len + dstsize : total_len;
}
