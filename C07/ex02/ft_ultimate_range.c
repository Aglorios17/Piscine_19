/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 11:31:12 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/27 18:36:32 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int a;
	int lengt;
	int *malabar;

	a = 0;
	lengt = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	malabar = malloc(sizeof(int) * (lengt));
	if (malabar == NULL)
		return (0);
	while (a < max - min)
	{
		malabar[a] = min + a;
		a++;
	}
	*range = malabar;
	return (a);
}
