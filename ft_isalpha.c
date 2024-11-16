/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:07:39 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/10/26 16:11:19 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(char *x)
{
	int	counter;

	counter = 0;
	while (x[counter] != '\0')
	{
		if (!((x[counter] >= 'a' && x[counter] <= 'z')
				|| (x[counter] >= 'A' && x[counter] <= 'Z')))
		{
			return (1);
		}
		counter++;
	}
	return (0);
}
