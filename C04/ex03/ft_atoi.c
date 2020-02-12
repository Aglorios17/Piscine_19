/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoiV2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 08:43:52 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/27 22:08:17 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sign(char *str, int i)
{
	int signe;

	signe = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signe++;
			i++;
		}
		else
			i++;
	}
	return (signe);
}

int	ft_atoi(char *str)
{
	int i;
	int signe;
	int result;

	result = 0;
	signe = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	signe = ft_sign(str, i);
	while (str[i] == '-' || str[i] == '+')
		i++;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if (signe % 2 != 0)
		result = result * -1;
	return (result);
}
