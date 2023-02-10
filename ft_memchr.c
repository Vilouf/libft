/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: velbling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:51:58 by velbling          #+#    #+#             */
/*   Updated: 2022/11/14 14:57:00 by velbling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*t;

	i = 0;
	t = (char *) s;
	while (i < n)
	{
		if (t[i] == (char) c)
			return (&t[i]);
		i++;
	}
	return (0);
}
