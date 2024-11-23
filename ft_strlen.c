/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/10/26 16:16:33 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/10/26 16:18:29 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}
