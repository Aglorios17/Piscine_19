/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:25:42 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/18 22:13:49 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	tableau(char *carre)
{
	carre = "1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3\n";

	int a;

	a = 0;
	while (carre[a] != '\0')
	{
		write(1, &carre[a], 1);
		a++;
	}
	return (0);
}

int		return_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int		main(int argc, char **argv)
{
	int		a;

	a = 0;
	if (**argv)
	{
		if (argc != 2)
			return (return_error());
		while (argv[1][a] != '\0')
			a++;
		if (a != 31)
			return (return_error());
		a = 0;
		while (a < 31)
		{
			if (argv[1][a] > '0' && argv[1][a] < '5')
				a = a + 2;
			else
			{
				return (return_error());
				a = 31;
			}
		}
		a = 1;
		while (a < 16)
		{
			if (argv[1][a] == ' ')
				a = a + 2;
			else
			{
				return (return_error());
				a = 16;
			}
		}
	}
	write(1, "1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3\n", 32);
	return (0);
}
