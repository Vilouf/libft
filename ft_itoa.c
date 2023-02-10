/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: velbling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:38:28 by velbling          #+#    #+#             */
/*   Updated: 2022/11/22 17:11:26 by velbling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	i++;
	return (i);
}

static char	*ft_intmin(int n)
{
	char	*tab;

	(void) n;
	tab = malloc(12 * sizeof(char));
	if (tab == NULL)
		return (NULL);
	tab[0] = '-';
	tab[1] = '2';
	tab[2] = '1';
	tab[3] = '4';
	tab[4] = '7';
	tab[5] = '4';
	tab[6] = '8';
	tab[7] = '3';
	tab[8] = '6';
	tab[9] = '4';
	tab[10] = '8';
	tab[11] = '\0';
	return (tab);
}

char	*ft_itoa(int n)
{
	int		i;
	int		minus;
	char	*tab;

	if (n == -2147483648)
		return (ft_intmin(n));
	i = ft_digits(n);
	minus = n;
	tab = malloc(i + 1 * sizeof (char));
	if (!tab)
		return (NULL);
	tab[i--] = '\0';
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		tab[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	tab[i] = n + 48;
	if (minus < 0)
		tab[--i] = '-';
	return (tab);
}
