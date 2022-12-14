/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:26:59 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 14:27:01 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_pb(t_stacks *stacks)
{
	t_psnode	*pop;
	t_psnode	*aux;

	pop = stacks->stack_a;
	aux = stacks->stack_a;
	if (!pop)
		return ;
	if (!pop->next)
	{
		ps_lstadd_front(&stacks->stack_b, pop);
		stacks->stack_a = NULL;
	}
	else
	{
		aux = stacks->stack_a->next;
		ps_lstadd_front(&stacks->stack_b, pop);
		stacks->stack_a = aux;
	}
	write(1, "pb\n", 3);
}
