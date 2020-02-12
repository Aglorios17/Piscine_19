/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:32:56 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/22 16:04:18 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*tmp;

	a = 1;
	b = 2;
	while (a < argc - 1)
	{
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				tmp = argv[a];
				argv[a] = argv[b];
				argv[b] = tmp;
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	a = 0;
	while (a++ < argc - 1)
		ft_putstr(argv[a]);
	return (0);
}
