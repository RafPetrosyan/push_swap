/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:30:35 by rafpetro          #+#    #+#             */
/*   Updated: 2024/07/16 14:30:46 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **a)
{
	if (check_sort(*a) == 0)
		return ;
	if ((*a)->index == 0)
	{
		rra(a, 0);
		sa(a, 0);
	}
	else if ((*a)->index == 1 && (*a)->next->index == 2)
		rra(a, 0);
	else if ((*a)->index == 1)
		sa(a, 0);
	else if ((*a)->index == 2 && (*a)->next->index == 0)
		ra(a, 0);
	else
	{
		ra(a, 0);
		sa(a, 0);
	}
}

void	sort_3_5(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	if (check_sort(*a) == 0)
		return ;
	while (stack_qanak(*a) != 3)
	{
		patrastel_pushi(i++, a);
		pb(a, b);
	}
	indexavorel(*a);
	sort_3(a);
	while (*b != 0)
		pa(a, b);
}

void	sort_butterfly(t_stack **a, t_stack **b, int offset)
{
	int		i1;

	i1 = 0;
	while (*a != 0)
	{
		if ((*a)->index <= i1)
		{
			pb(a, b);
			rb(b, 0);
			++i1;
		}
		else if ((*a)->index <= i1 + offset)
		{
			pb(a, b);
			++i1;
		}
		else
			ra(a, 0);
	}
	while (*b != 0)
	{
		gtnel(b, stack_qanak(*b));
		pa(a, b);
	}
}

void	sort(t_stack **a, t_stack **b)
{
	int	count;

	if (check_sort(*a) == 0)
		return ;
	count = stack_qanak(*a);
	if (count == 2)
		sa(a, 0);
	else if (count > 2 && count < 6)
		sort_3_5(a, b);
	else
		sort_butterfly(a, b, log2_n(2 * count) * log5_n(0.25 * count));
	indexavorel(*a);
}
