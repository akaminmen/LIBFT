/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:45:31 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/11/23 17:32:29 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_toupper(char *c)
{
	int	counter;

	counter = 0;
	while (c[counter] != '\0')
	{
		if (c[counter] >= 'a' && c[counter] <= 'z')
		{
			c[counter] -= 32;
		}
		counter++;
	}
	return (c);
}
