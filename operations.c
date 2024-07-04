#include "push_swap.h"

void    sa(t_stack **a)
{
    t_stack *temp;

    write(1, "sa\n", 3);
    if ((*a) == 0 || (*a)->next == 0)
        return;
    temp = (*a)->next;
    (*a)->next = (*a)->next->next;
    temp->next = (*a);
    (*a) = temp;
}

void    sb(t_stack **b)
{
    t_stack *temp;

    write(1, "sb\n", 3);
    if ((*b) == 0 || (*b)->next == 0)
        return;
    temp = (*b)->next;
    (*b)->next = (*b)->next->next;
    temp->next = (*b);
    (*b) = temp;
}

void    ss(t_stack **a, t_stack **b)
{
    write(1, "ss\n", 3);
    sa(a);
    sb(b);
}

void    pa(t_stack **a, t_stack **b)
{
    t_stack *temp;

    write(1, "pa\n", 3);
    if (*a == 0)
        return;
    temp = (*a)->next;
    (*a)->next = (*b);
    (*b) = (*a);
    (*a) = temp;
}

void    pb(t_stack **a, t_stack **b)
{
    t_stack *temp;

    write(1, "pb\n", 3);
    if (*b == 0)
        return;
    temp = (*b)->next;
    (*b)->next = (*a);
    (*a) = (*b);
    (*b) = temp;
}

void    ra(t_stack **a)
{
    t_stack *temp;

    if (*a == 0)
        return;
    write(1, "ra\n", 3);
    temp = *a;
    while (temp->next != 0)
        temp = temp->next;
    temp->next = *a;
    temp = (*a)->next;
    (*a)->next = 0;
    *a = temp;
}

void    rb(t_stack **b)
{
    t_stack *temp;

    write(1, "rb\n", 3);
    temp = *b;
    if (*b == 0 || (*b)->next == 0)
        return;
    while (temp->next != 0)
        temp = temp->next;
    temp->next = *b;
    temp = (*b)->next;
    (*b)->next = 0;
    *b = temp;
}

void    rra(t_stack **a)
{
    t_stack *temp1;
    t_stack *temp2;

    if (*a == 0 || (*a)->next == 0)
        return;
    temp1 = *a;
    while (temp1->next != 0)
    {
        if(temp1->next->next == 0)
            temp2 = temp1;
        temp1 = temp1->next;
    }
    temp1->next = *a;
    temp2->next = 0;
    *a = temp1;
}
void    rrb(t_stack **a)
{
    t_stack *temp1;
    t_stack *temp2;

    if (*a == 0 || (*a)->next == 0)
        return;
    temp1 = *a;
    while (temp1->next != 0)
    {
        if(temp1->next->next == 0)
            temp2 = temp1;
        temp1 = temp1->next;
    }
    temp1->next = *a;
    temp2->next = 0;
    *a = temp1;
}