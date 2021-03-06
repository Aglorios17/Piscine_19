/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 09:49:25 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/17 18:29:39 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_str_is_printable(char *str)
{
	int a;

	a = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if (str[a] < 32 || str[a] > 126)
			return (0);
		a++;
	}
	return (1);
}
