/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 18:50:04 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/25 20:27:09 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define TAB_SIZE 4098

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (str[a] != '\0')
	{
		while (str[a + b] == to_find[b])
		{
			b++;
			if (to_find[b] == '\0')
			{
				while (str[a + b] != '\n')
				{
					if (str[a + b] >= 'a' && str[a + b] == 'z')
						write(1, &str[a + b], 1);
					b++;

				}
				return (str);
			}
		}
		a++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int fd;
	int ret;
	char tab[TAB_SIZE + 1];

	i = 0;
	fd = open("numbers.dict", O_RDONLY);
	ret = read(fd, tab, TAB_SIZE);

	while (tab[i] != '\0')
		i++;
	tab[i] = '\0';

	ft_strstr(tab, argv[1]);
}
