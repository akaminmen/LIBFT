/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:32:31 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/11/16 16:38:26 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static size_t	get_num_len(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	size_t	i;

	len = get_num_len(n);
	*str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	i = len - 1;
	if (n == 0)
		str[i] = '0';
	while (n)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
