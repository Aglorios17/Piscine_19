/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 14:28:50 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/25 19:47:35 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

char putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}

int main(int argc, char **argv)
{
	int a;
	int b;
	char *str;


	str[] = "Error";
	a = 1;
	b = 0;
	while (argv[1][b] != '\0')
	{
		if (argv[1][b] <  32 || argv[1][b] > 126)
		{
			write(1, "Error\n", 1)
		}	
		else
			b++;
	}
	while (argv[a][b] < 3)
		return (putstr(str);

}
