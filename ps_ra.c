/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:02 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 14:27:04 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_ra(t_stacks *stacks)
{
	t_psnode	*last;
	t_psnode	*first;
	t_psnode	*second;

	if (!stacks->stack_a)
		return ;
	second = stacks->stack_a->next;
	first = stacks->stack_a;
	last = stacks->stack_a;
	last = ps_lstlast(last);
	last->next = stacks->stack_a;
	first->next = NULL;
	stacks->stack_a = second;
	write(1, "ra\n", 3);
}
