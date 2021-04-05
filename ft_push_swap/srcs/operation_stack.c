/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:55:15 by mel-omar          #+#    #+#             */
/*   Updated: 2021/04/05 15:41:51 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	swap_first2(t_stack **stack)
{
	void		*temp;

	if (*stack && (*stack)->next)
	{
		temp = (*stack)->data;
		(*stack)->data = (*stack)->next->data;
		(*stack)->next->data = temp;
	}
}

void	rotate_stack_up(t_stack **stack)
{
	void		*data;
	t_stack		*temp;
	t_stack		*before;
	if (*stack)
	{
		before = *stack;
		temp  = before->next;
		data = before->data;
		while (temp)
		{
			before->data = temp->data;
			before = temp;
			temp = temp->next;
		}
		before->data = data;
	}
}

void	rotate_stack_down(t_stack **stack)
{
	void	*data;
	t_stack	*temp;

	if (*stack)
	{
		temp = *stack;
		while (temp->next)
		{
			data = temp->next->data;
			temp->next->data = temp->data;
			temp = temp->next;
		}
		(*stack)->data = data;
	}		
}

void	push_number(t_stack **stack, int number)
{
	int		*data;

	data = malloc(sizeof(int));
	*data  = number;
	push_stack(stack, data);
}

void	from_a2b(t_stack **a, t_stack **b)
{
	push_stack(b, pop_stack(a));
}
