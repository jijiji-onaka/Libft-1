/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 19:09:50 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 00:18:35 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_lst.h"

int		ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*save;

	if (!lst)
		return (0);
	save = lst;
	count = 1;
	while (save->next)
	{
		count++;
		save = save->next;
	}
	return (count);
}
