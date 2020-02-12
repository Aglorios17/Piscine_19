/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 15:00:03 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/28 09:52:09 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char	a;
	char	b;

	a = 47;
	while (a++ < '8')
	{
		b = a;
		while (b++ < '9')
		{
			putchar(a);
			putchar(b);
			if (a < '8')
				write(1, ", ", 2);
		}
	}
}
