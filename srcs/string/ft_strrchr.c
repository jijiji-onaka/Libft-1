/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:39:04 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 00:17:43 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_string.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*ret;

	str = (char *)s;
	ret = NULL;
	while (*str)
	{
		if (*str == c)
			ret = str;
		str++;
	}
	if (c == '\0')
		return (str);
	return (ret);
}
