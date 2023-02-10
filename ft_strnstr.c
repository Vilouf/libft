/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: velbling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:51:07 by velbling          #+#    #+#             */
/*   Updated: 2022/11/23 14:58:42 by velbling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (haystack == NULL && len == 0)
		return (NULL);
	i = 0;
	j = 0;
	if (!ft_strlen((char *) needle))
		return ((char *) haystack);
	while (haystack[i])
	{
		while (i < len && haystack[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *) &haystack[i - j]);
		}
		i = i - j + 1;
		j = 0;
	}
	return (0);
}
