/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 11:08:47 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/29 10:46:39 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int a;

	(void)argc;
	a = 0;
	while (argv[0][a] != '\0')
	{
		write(1, &argv[0][a], 1);
		a++;
	}
	write(1, "\n", 1);
	return (0);
}
