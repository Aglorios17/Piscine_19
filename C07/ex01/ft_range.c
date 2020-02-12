/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 12:23:17 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/27 18:35:05 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int a;
	int *malabar;

	a = 0;
	if (min >= max)
		return (0);
	malabar = malloc(sizeof(int) * (max - min));
	if (malabar == NULL)
		return (0);
	while (a < max - min)
	{
		malabar[a] = min + a;
		a++;
	}
	return (malabar);
}
