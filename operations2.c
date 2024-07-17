/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:10:10 by rafpetro          #+#    #+#             */
/*   Updated: 2024/07/13 14:10:20 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a, int flag)
{
	t_stack	*temp;

	if (*a == 0)
		return ;
	if (flag == 0)
		write(1, "ra\n", 3);
	temp = *a;
	while (temp->next != 0)
		temp = temp->next;
	temp->next = *a;
	temp = (*a)->next;
	(*a)->next = 0;
	*a = temp;
}

void	rb(t_stack **b, int flag)
{
	t_stack	*temp;

	if (flag == 0)
		write(1, "rb\n", 3);
	temp = *b;
	if (*b == 0 || (*b)->next == 0)
		return ;
	while (temp->next != 0)
		temp = temp->next;
	temp->next = *b;
	temp = (*b)->next;
	(*b)->next = 0;
	*b = temp;
}

void	rr(t_stack **a, t_stack **b)
{
	write(1, "rr\n", 3);
	ra(a, 1);
	rb(b, 1);
}

void	rra(t_stack **a, int flag)
{
	t_stack	*temp1;
	t_stack	*temp2;

	if (flag == 0)
		write(1, "rra\n", 4);
	if (*a == 0 || (*a)->next == 0)
		return ;
	temp1 = *a;
	while (temp1->next != 0)
	{
		if (temp1->next->next == 0)
			temp2 = temp1;
		temp1 = temp1->next;
	}
	temp1->next = *a;
	temp2->next = 0;
	*a = temp1;
}

void	rrb(t_stack **a, int flag)
{
	t_stack	*temp1;
	t_stack	*temp2;

	if (flag == 0)
		write(1, "rrb\n", 4);
	if (*a == 0 || (*a)->next == 0)
		return ;
	temp1 = *a;
	while (temp1->next != 0)
	{
		if (temp1->next->next == 0)
			temp2 = temp1;
		temp1 = temp1->next;
	}
	temp1->next = *a;
	temp2->next = 0;
	*a = temp1;
}
