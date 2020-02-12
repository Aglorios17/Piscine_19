/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:47:08 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/28 10:10:57 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_memoire(int size, char **strs, char *sep)
{
	int a;
	int b;
	int i;

	i = 0;
	while (sep[i])
		i++;
	i *= size - 1;
	a = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b])
		{
			i++;
			b++;
		}
		a++;
	}
	if (i <= 0)
		return (0);
	i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*malabar;
	int		a;
	int		b;
	int		c;
	int		d;

	malabar = malloc(sizeof(*malabar) * ft_memoire(size, strs, sep));
	if (size == 0)
		return (malabar);
	c = -1;
	a = -1;
	while (++a < size)
	{
		b = -1;
		d = -1;
		while (strs[a][++b])
			malabar[++c] = strs[a][b];
		while (sep[++d] && a < size - 1)
			malabar[++c] = sep[d];
	}
	malabar[++c] = '\0';
	return (malabar);
}
