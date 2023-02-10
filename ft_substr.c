/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: velbling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:35:00 by velbling          #+#    #+#             */
/*   Updated: 2022/11/21 13:22:29 by velbling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;

	i = 0;
	if (!s)
		return (NULL);
	if (start < (size_t) ft_strlen(s))
		len += start;
	if (len > (size_t) ft_strlen(s))
		len = ft_strlen(s);
	if (start < len)
		str = malloc((len - start + 1) * sizeof(char));
	else
		str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	i = start;
	while (i < len && s[i])
	{
		str[i - start] = s[i];
		i++;
	}
	str[i - start] = '\0';
	return (str);
}
