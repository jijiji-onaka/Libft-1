/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:17:35 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 00:18:03 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_string.h"

size_t		ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	di;
	size_t	si;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	di = dlen;
	si = 0;
	while (src[si] && di + 1 < size)
		dest[di++] = src[si++];
	dest[di] = '\0';
	return (slen + ft_min(dlen, size));
}
