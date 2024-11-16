/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:13:06 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/10/26 16:14:42 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(char *x)
{
	int	counter;

	counter = 0;
	while (x[counter] != '\0')
	{
		if (!(x[counter] >= 32 && x[counter] <= 126))
		{
			return (1);
		}
		counter++;
	}
	return (0);
}