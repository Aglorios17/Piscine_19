/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 19:33:48 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/25 19:47:23 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define TAB_SIZE 4098

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	int op;
	int ret;
	char tab[TAB_SIZE + 1];

	if (argc == 2)
	{
		i = 0;
		op = open("numbers.dict", O_RDONLY);
		ret = read(op, tab, TAB_SIZE);

		while (tab[i] != '\0')
		{
			i++;
		}
		tab[i] = '\0';

		int j;
		int h;

		i = 0;
		while (h != 1)
		{
			if (tab[i] == argv[1][j])
			{
				while (tab[i] != '\n')
				{
					if (tab[i] >= 'a' && tab[i] <= 'z')
						write(1, &tab[i], 1);
					i++;
				}
				h = 1;
			}
			i++;
		}
	}
	return(0);
}
