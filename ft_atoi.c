/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: velbling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:07:20 by velbling          #+#    #+#             */
/*   Updated: 2022/11/24 10:39:18 by velbling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ');
}

static int	ft_makeint(char *str, int i)
{
	int	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	is_negative;

	i = 0;
	is_negative = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_negative++;
		i++;
	}
	if (is_negative % 2 != 0)
		is_negative = -1;
	else
		is_negative = 1;
	return (ft_makeint((char *) str, i) * is_negative);
}
