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
	t_stack	*temp;
	int		i;

	if (check_sort(*a) == 0)
		return ;
	while (stack_qanak(*a) != 3)
	{
		i = 0;
		temp = *a;
		while (temp->index != 0)
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
		pb(a, b);
		indexavorel(*a);
	}
	sort_3(a);
	while (*b != 0)
		pa(a, b);
	indexavorel(*a);
}