/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 12:15:40 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/25 19:47:39 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putstr(char *str)
{
	str = "Error";
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (argc[a] != '\0')
		a++;
	return (a);
	if(argv[a][b] == 0)
		return (putstr);
	while (argv[a][b] < 3)
		a++;
	return (putstr);
	while (argv[b][b])
	if (!(argv[a][b] > '47' && argv[b] < '58'))
		return (putstr);
	else
		b++;
	
	while (argv[b] >= 0)
		b++;
	return (putstr);
}
