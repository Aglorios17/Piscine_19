/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:39:21 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/17 17:52:13 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			if (!(str[a - 1] >= '0' && str[a - 1] <= '9'))
				if (!(str[a - 1] >= 'A' && str[a - 1] <= 'Z'))
					if (!(str[a - 1] >= 'a' && str[a - 1] <= 'z'))
						str[a] = str[a] - 32;
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			if (str[a - 1] >= '0' && str[a - 1] <= '9')
				str[a] = str[a] + 32;
			if (str[a - 1] >= 'A' && str[a - 1] <= 'Z')
				str[a] = str[a] + 32;
			if (str[a - 1] >= 'a' && str[a - 1] <= 'z')
				str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
