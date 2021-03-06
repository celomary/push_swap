/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:10:26 by mel-omar          #+#    #+#             */
/*   Updated: 2021/04/05 12:33:25 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include <stdlib.h>

typedef struct s_stack
{
	void			*data;
	struct s_stack	*next;
}				t_stack;

t_stack		*init_stack(void);
void		push_stack(t_stack **stack, void *data);
void		*pop_stack(t_stack **stack);
void		*peek_stack(const t_stack *stack);
void		clear_stack(t_stack **stack,
				void (*free_value)(void *data));
#endif