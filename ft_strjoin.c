/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:43:25 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/11/23 14:30:00 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*joined_str;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined_str = malloc(len1 + len2 + 1);
	i = 0;
	if (!joined_str)
		return (NULL);
	while (i < len1)
	{
		joined_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		joined_str[len1 + i] = s2[i];
		i++;
	}
	joined_str[len1 + len2] = '\0';
	return (joined_str);
}
