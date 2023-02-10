/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: velbling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:42:49 by velbling          #+#    #+#             */
/*   Updated: 2022/11/14 11:58:57 by velbling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *) s1;
	b = (char *) s2;
	while (i < n)
	{
		if (a[i] != b[i])
			return ((unsigned char) a[i] - (unsigned char) b[i]);
		i++;
	}
	return (0);
}
