/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:03:13 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/07 13:48:14 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	if (argc < 2)
		return (0);
	stacks = &(t_stacks){0};
	not_valid_args(argc, argv);
	create_stack_a(argc, argv, &stacks->stack_a);
	if (!stacks->stack_a)
		exit_func(stacks);
	stacks->len_stack_a = ps_lstsize(stacks->stack_a);
	if (is_ordered(stacks))
		;
	else if (argc == 3)
		move_sa(stacks);
	else if (argc == 4)
		ps_three_sort(stacks);
	else if (argc == 6)
		ps_five_sort(stacks);
	else
		ps_radix(stacks);
	ps_lstclear(&stacks->stack_a);
}
