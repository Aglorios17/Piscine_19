/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 11:53:54 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/24 19:24:45 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
		a++;
	if (size == 0)
		return (a);
	while (b + 1 < size && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	dest[b] = '\0';
	b = 0;
	while (src[b] != '\0')
		b++;
	return (a);
}
