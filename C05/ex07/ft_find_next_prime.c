/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:23:52 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/22 17:55:41 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int a;

	a = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (a <= nb / a)
	{
		if (nb % a == 0)
		{
			return (0);
		}
		a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int a;

	a = 0;
	while (!(ft_is_prime(nb + a)))
	{
		a++;
	}
	return (nb + a);
}
