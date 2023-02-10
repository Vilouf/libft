/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: velbling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:47:53 by velbling          #+#    #+#             */
/*   Updated: 2022/11/23 14:52:20 by velbling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*a;
	char		*b;

	if (!dst && !src)
		return (NULL);
	i = 0;
	a = (char *) dst;
	b = (char *) src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
