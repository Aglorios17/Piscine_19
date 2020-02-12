/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:27:32 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/22 17:43:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int a;
	int b;

	b = 0;
	a = 1;
	if (nb > 0)
	{
		while (b < nb)
		{
			a = a * (nb - b);
			b++;
		}
		return (a);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
		return (0);
}
