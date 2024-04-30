#include "push_swap.h"

void    sa(stack *a)
{
    long    temp;

    temp = a->last->value;
    a->last->value = a->last->prev->value;
    a->last->prev->value = temp;
}

void    sb(stack *b)
{
    long    temp;

    temp = b->last->value;
    b->last->value = b->last->prev->value;
    b->last->prev->value = temp;
}

void    ss(stack *a, stack *b)
{
    long    temp;

    temp = a->last->value;
    a->last->value = a->last->prev->value;
    a->last->prev->value = temp;
    temp = b->last->value;
    b->last->value = b->last->prev->value;
    b->last->prev->value = temp;

}