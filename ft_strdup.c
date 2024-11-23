/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:15:43 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/11/23 17:11:01 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*x)
{
	int		i;
	char	*new;
	int		size;

	size = 0;
	while (x[size])
		size++;
	new = (char *)malloc(size + 1);
	i = 0;
	while (x[i])
	{
		new[i] = x[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
