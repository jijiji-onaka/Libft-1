/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 09:55:22 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 00:17:38 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_string.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	l;
	int		i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		if (!(res = ft_strdup("")))
			return (NULL);
		return (res);
	}
	if (ft_strlen(s) - (size_t)start < len)
		l = ft_strlen(s) - (size_t)start;
	else
		l = len;
	res = ft_calloc(l + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (l-- != 0)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
