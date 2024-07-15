#include "push_swap.h"

void	sort_3(t_stack **a)
{
	if (check_sort(*a) == 0)
		return ;
	if ((*a)->index == 0)
	{
		rra(a);
		sa(a);
	} else if ((*a)->index == 1 && (*a)->next->index == 2)
	{
		rra(a);
	} else if ((*a)->index == 1)
	{
		sa(a);
	} else if ((*a)->index == 2 && (*a)->next->index == 0)
	{
		ra(a);
	} else
	{
		ra(a);
		sa(a);
	}
}

void	sort_4_6(t_stack **a, t_stack **b)
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

void	sort_butterfly(t_stack **a, t_stack **b)
{
	int		i1;
	int		qanak;
	int		offset;

	i1 = 0;
	qanak = stack_qanak(*a);
	offset = log2_n(2 * qanak) * log5_n(0.25 * qanak);
	while (*a != 0)
	{
		if ((*a)->index <= i1)
		{
			pb(a, b);
			rb(b);
			++i1;
		}
		else if ((*a)->index <= i1 + offset)
		{
			pb(a, b);
			++i1;
		}
		else
			ra(a);
	}
	while (*b != 0)
	{
		gtnel(b, qanak);
		pa(a, b);
		--qanak;
	}
}

void	patrastel_pushi(int index, t_stack **a)
{
	t_stack *temp;
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
		while ((*a)->index != 0)
			rra(a);
	}
	else
	{
		while (i-- != 0)
			ra(a);
	}
}

void	gtnel(t_stack **b, int qanak)
{
	int	i;
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
			rb(b);
	}
	else
	{
		while ((*b)->index != qanak - 1)
			rrb(b);
	}
}
