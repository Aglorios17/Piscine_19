/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makefile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 20:37:56 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/25 21:00:07 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

NAME = prog
SRC = $(wildcard *.c)
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)
HEADER = include

all : $(NAME)

$(NAME) :
	gcc $(CFLAGS) $(SRC)

clean:
	rm -rf a.out
