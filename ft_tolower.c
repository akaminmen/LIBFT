/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:36:48 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/11/23 17:32:18 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tolower(char *c)
{
	int	counter;

	counter = 0;
	while (c[counter] != '\0')
	{
		if (c[counter] >= 'A' && c[counter] <= 'Z')
		{
			c[counter] += 32;
		}
		counter++;
	}
	return (c);
}
