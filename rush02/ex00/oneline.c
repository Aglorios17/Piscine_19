/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oneline.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 15:29:42 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/24 16:10:48 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd;

	fd = open("readme.c", O_RDONLY);
	printf("%c", fd);
	return (0);
}
