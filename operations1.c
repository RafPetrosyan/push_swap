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

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	write(1, "pa\n", 3);
	if (*a == 0)
		return ;
	temp = (*a)->next;
	(*a)->next = (*b);
	(*b) = (*a);
	(*a) = temp;
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	write(1, "pb\n", 3);
	if (*b == 0)
		return ;
	temp = (*b)->next;
	(*b)->next = (*a);
	(*a) = (*b);
	(*b) = temp;
}
