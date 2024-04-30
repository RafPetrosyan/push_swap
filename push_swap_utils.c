#include "push_swap.h"

int checker(int argc, char **arr)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while(i < argc)
    {
        j = 0;
        while (arr[i][j] != '\0')
        {
            if(!((arr[i][j] >= '0' && arr[i][j] <= '9') || arr[i][j] == ' ' || arr[i][j] == '+' || arr[i][j] == '-'))
                return (1);
            if((arr[i][j] == '-' || arr[i][j] == '+') && !(arr[i][j + 1] >= '0' && arr[i][j + 1] <= '9'))
                return (1);
            if((arr[i][j] == '0' && arr[i][j + 1] >= '0' && arr[i][j + 1] <= '9'))
                return (1);
            ++j;
        }
        ++i;   
    }
    return (0);
}

int	ft_atoi(char *nptr)
{
	int	i;
	int	sign;
	int	numb;

	i = 0;
	sign = 1;
	numb = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		++i;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= (-1);
		++i;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
	    numb = numb * 10 + nptr[i] - '0';
		++i;
	}
	return (sign * numb);
}

Node    *new_node(long val)
{
    Node    *ret;

    ret = (Node *)malloc(sizeof(Node));
    ret->value = val;
    ret->prev = 0;
    ret->next = 0;
    return (ret);
}

void    arr_add_stack(char **tver, stack *a)
{
    int     i;
    Node    *temp;

    i = 0;
    while(tver[i] != 0)
    {
        if((*a).first == 0)
        {
            (*a).first = new_node(ft_atoi(tver[i]));
            (*a).last = (*a).first;
            ++i;
            continue; 
        }
        (*a).last->next = new_node(ft_atoi(tver[i]));
        (*a).last->next->prev = (*a).last; 
        (*a).last = (*a).last->next;
        ++i;
    }
}

void    ft_delete_arr(char **tver)
{
    int i;

    i = 0;
    while(tver[i] != 0)
        free(tver[i++]);
    free(tver);
}

void    print_stack(stack *a)
{
    Node    *temp;

    temp = (*a).last;
    while (temp != 0)
    {
        printf("%ld\n", temp->value);
        temp = temp->prev;
    }
}