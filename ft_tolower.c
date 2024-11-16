/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:36:48 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/10/26 16:48:18 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_tolower(char *x)
{
	int	counter;

	counter = 0;
	while (x[counter] != '\0')
	{
		if (x[counter] >= 'A' && x[counter] <= 'Z')
		{
			x[counter] += 32;
		}
		counter++;
	}
	return (x);
}
