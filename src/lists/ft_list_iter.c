/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_iter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftriquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 05:22:47 by ftriquet          #+#    #+#             */
/*   Updated: 2016/03/06 19:46:47 by ftriquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

void			ft_list_iter(t_list *list,
		void (*func)(void *data, size_t data_size))
{
	t_list_cell	*it;

	it = list->first;
	while (it)
	{
		(*func)(it->data, it->data_size);
		it = it->next;
	}
}
