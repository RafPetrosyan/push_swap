/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:30:12 by rafpetro          #+#    #+#             */
/*   Updated: 2024/07/16 14:30:53 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	patrastel_pushi(int index, t_stack **a)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *a;
	while (temp->index != index)
	{
		temp = temp->next;
		++i;
	}
	if (i > (stack_qanak(*a) / 2))
	{
		while ((*a)->index != index)
			rra(a, 0);
	}
	else
	{
		while (i-- != 0)
			ra(a, 0);
	}
}

void	gtnel(t_stack **b, int qanak)
{
	int		i;
	t_stack	*temp;

	temp = *b;
	i = 0;
	while (temp->index != qanak - 1)
	{
		++i;
		temp = temp->next;
	}
	if (i <= qanak / 2)
	{
		while ((*b)->index != qanak - 1)
			rb(b, 0);
	}
	else
	{
		while ((*b)->index != qanak - 1)
			rrb(b, 0);
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	write(1, "rrr\n", 4);
	rra(a, 1);
	rrb(b, 1);
}
