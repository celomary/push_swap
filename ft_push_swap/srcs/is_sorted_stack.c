/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:57:24 by mel-omar          #+#    #+#             */
/*   Updated: 2021/04/06 14:26:18 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

static int	get_number(int *d)
{
	return (*d);
}

int	is_sorted(t_stack *st)
{
	int		data;

	if (!st)
		return (1);
	data = get_number(st->data);
	st = st->next;
	while (st)
	{
		if (get_number(st->data) < data)
			return (0);
		data =  get_number(st->data);
		st = st->next;
	}
	return (1);
}