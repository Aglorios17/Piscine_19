/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:49:35 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/22 17:50:27 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int a;

	if (power > 0)
	{
		a = nb * ft_recursive_power(nb, power - 1);
		return (a);
	}
	else if (power == 0)
		return (1);
	else if (power == 0 && nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	return (0);
}
