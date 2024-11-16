/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:45:31 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/10/26 16:50:31 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_toupper(char *x)
{
	int	counter;

	counter = 0;
	while (x[counter] != '\0')
	{
		if (x[counter] >= 'a' && x[counter] <= 'z')
		{
			x[counter] -= 32;
		}
		counter++;
	}
	return (x);
}
