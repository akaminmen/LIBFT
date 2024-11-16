/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacaro-m <bacaro-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:51:16 by bacaro-m          #+#    #+#             */
/*   Updated: 2024/10/26 16:54:08 by bacaro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(char *x)
{
	int	counter;

	counter = 0;
	while (x[counter] != '\0')
	{
		if (!((x[counter] >= 'a' && x[counter] <= 'z')
				|| (x[counter] >= 'A' && x[counter] <= 'Z')
				|| ((x[counter] >= '0' && x[counter] <= '9'))))
		{
			return (1);
		}
		counter++;
	}
	return (0);
}
