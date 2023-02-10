/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: velbling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:44:51 by velbling          #+#    #+#             */
/*   Updated: 2022/11/23 15:04:06 by velbling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_freetab(char **tabstr)
{
	int	i;

	i = 0;
	while (tabstr[i])
	{
		free(tabstr[i]);
		i++;
	}
	free(tabstr);
	return (NULL);
}

static int	ft_count(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] == (char) c && str[i] != 0)
		i++;
	if (str[i] == '\0')
		return (0);
	count = 1;
	while (str[i])
	{
		if (str[i] == (char) c)
		{
			while (str[i] == (char) c)
				i++;
			if (str[i] != 0)
				count++;
		i--;
		}
		i++;
	}
	return (count);
}

static char	*ft_dosplit(const char *s, char c, int i)
{
	int		num;
	char	*str;

	num = 0;
	while (s[i + num] != (char) c && s[i + num])
		num++;
	str = ft_substr(s, i, num);
	if (!str)
		return (NULL);
	return (str);
}	

char	**ft_split(char const *s, char c)
{
	int		count;
	int		word;
	int		i;
	char	**tabstr;

	count = ft_count(s, c);
	word = 0;
	i = 0;
	tabstr = ft_calloc(count + 1, sizeof(char *));
	if (!tabstr)
		return (NULL);
	while (word < count && s[i])
	{
		while (s[i] == (char) c && s[i])
			i++;
		tabstr[word] = ft_dosplit(s, c, i);
		if (!tabstr[word])
			return (ft_freetab(tabstr));
		word++;
		while (s[i] != (char) c && s[i])
			i++;
	}
	tabstr[word] = NULL;
	return (tabstr);
}
