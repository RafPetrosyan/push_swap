/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:10:01 by rafpetro          #+#    #+#             */
/*   Updated: 2024/07/13 14:10:03 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	t_stack	*temp;

	write(1, "sa\n", 3);
	if ((*a) == 0 || (*a)->next == 0)
		return ;
	temp = (*a)->next;
	(*a)->next = (*a)->next->next;
	temp->next = (*a);
	(*a) = temp;
}

void	sb(t_stack **b)
{
	t_stack	*temp;

	write(1, "sb\n", 3);
	if ((*b) == 0 || (*b)->next == 0)
		return ;
	temp = (*b)->next;
	(*b)->next = (*b)->next->next;
	temp->next = (*b);
	(*b) = temp;
}

void	ss(t_stack **a, t_stack **b)
{
	write(1, "ss\n", 3);
	sa(a);
	sb(b);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	write(1, "pb\n", 3);
	if (*a == 0)
		return ;
	temp = (*a)->next;
	(*a)->next = (*b);
	(*b) = (*a);
	(*a) = temp;
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	write(1, "pa\n", 3);
	if (*b == 0)
		return ;
	temp = (*b)->next;
	(*b)->next = (*a);
	(*a) = (*b);
	(*b) = temp;
}
