/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:01:01 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/22 17:48:04 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int a;

	if (nb == 0)
		return (1);
	else if (nb > 0)
		return (a = nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
	return (0);
}
