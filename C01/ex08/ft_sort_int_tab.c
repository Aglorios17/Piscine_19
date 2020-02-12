/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 08:59:08 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/22 12:06:58 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int tmp;

	a = 0;
	b = 1;
	while (a < size - 1)
	{
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				tmp = tab[a];
				tab[a] = tab[b];
				tab[b] = tmp;
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
