/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:16:10 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/10/26 16:20:46 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlcpy(char *src, char *dst)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (dst);
}
