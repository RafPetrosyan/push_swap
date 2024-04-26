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

void    arr_add_stack(char **tver, stack a)
{
    int i;
    Node *temp;

    i = 0;
    while(tver[i] != 0)
    {
        if(a.first = 0)
        
        temp = a.last;
        a.last = (Node *)malloc(sizeof(Node));
        a.last->value = ft_atoi(tver[i]);
        a.last->next = 0;
        a.last->prev = temp;
    }
}