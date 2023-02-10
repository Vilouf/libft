/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: velbling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:15:06 by velbling          #+#    #+#             */
/*   Updated: 2022/11/23 15:03:46 by velbling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_fromstart(const char *str, const char *trim)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (trim[j])
		{
			if (str[i] == trim[j])
			{
				k++;
				break ;
			}
			j++;
			if (!trim[j])
				return (k);
		}
		i++;
	}
	return (k);
}

static int	ft_fromend(const char *str, const char *trim)
{
	int	i;
	int	j;
	int	k;

	i = ft_strlen(str) - 1;
	k = 0;
	while (i > 0)
	{
		j = 0;
		while (trim[j])
		{
			if (str[i] == trim[j])
			{
				k++;
				break ;
			}
			j++;
			if (!trim[j])
				return (k);
		}
		i--;
	}
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!set)
		return ((char *) s1);
	if (!s1)
		return (NULL);
	start = ft_fromstart(s1, set);
	end = ft_fromend(s1, set);
	str = ft_substr(s1, start, ft_strlen(s1) - end - start);
	if (!str)
		return (NULL);
	return (str);
}
