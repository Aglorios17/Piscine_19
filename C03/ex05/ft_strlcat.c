/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 09:57:57 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/20 21:00:18 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int i;

	a = 0;
	b = 0;
	i = 0;
	while (dest[a] != '\0' && a < size)
		a++;
	i = i + a;
	while (src[b])
		b++;
	i = i + b;
	if (a == size)
		return (i);
	b = 0;
	while (src[b] && a + b < size - 1)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (i);
}
