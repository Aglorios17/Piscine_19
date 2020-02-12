/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:31:46 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/27 18:41:08 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strdup(char *src)
{
	int		a;
	char	*malabar;

	a = 0;
	if (src != NULL)
	{
		malabar = malloc(sizeof(*malabar) * (ft_strlen(src) + 1));
		if (malabar != NULL)
		{
			while (src[a] != '\0')
			{
				malabar[a] = src[a];
				a++;
			}
			malabar[a] = '\0';
			return (malabar);
		}
	}
	return (NULL);
}
