#include "push_swap.h"

void	sort_3(t_stack **a)
{
	if (check_sort(*a) == 0)
	{
		printf("Dasavorvac e");
		return;
	}
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
		sa(a);
	} else
	{
		ra(a);
	}
}