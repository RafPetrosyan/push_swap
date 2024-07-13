/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:10:57 by rafpetro          #+#    #+#             */
/*   Updated: 2024/07/13 14:10:59 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker(int argc, char **arr)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			if (!((arr[i][j] >= '0' && arr[i][j] <= '9') || arr[i][j] == ' ' ||
				arr[i][j] == '+' || arr[i][j] == '-'))
				return (1);
			if ((arr[i][j] == '-' || arr[i][j] == '+') &&
				!(arr[i][j + 1] >= '0' && arr[i][j + 1] <= '9'))
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

int	ft_atoi(char *nptr, char **arr, t_stack **a)
{
	int			i;
	int			n;
	int			sign;
	long long	numb;

	i = 0;
	n = 0;
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
		if (numb != 0)
			++n;
	}
	if (n <= 11)
	{
		if (!(sign * numb > 2147483647 || sign * numb < -2147483648))
			return (sign * numb);
	}
	ft_delete_arr(arr);
	free_stack(*a);
	print_stack(*a);
	exit(1);
}

t_stack	*new_node(long val)
{
	t_stack	*ret;

	ret = (t_stack *)malloc(sizeof(t_stack));
	if (ret == 0)
		exit(1);
	ret->value = val;
	ret->next = 0;
	return (ret);
}

void	arr_add_stack(char **tver, t_stack **a)
{
	int		i;
	t_stack	*temp;

	i = 0;
	while (tver[i] != 0)
	{
		if (*a == 0)
		{
			*a = new_node(ft_atoi(tver[i], tver, a));
			return ;
		}
		temp = *a;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = new_node(ft_atoi(tver[i], tver, a));
		++i;
	}
}

void	ft_delete_arr(char **tver)
{
	int	i;

	i = 0;
	while (tver[i] != 0)
		free(tver[i++]);
	free(tver);
}

void	free_stack(t_stack *a)
{
	if (a == 0)
		return ;
	if (a->next != 0)
		free_stack(a->next);
	free(a);
}

void	print_stack(t_stack *a)
{
	if (a == 0)
		return ;
	while (a != 0)
	{
		printf("%d	%d\n", a->index, a->value);
		a = a->next;
	}
}

int	validacia_krk(t_stack *a)
{
	t_stack	*temp;

	if (a == 0)
		return (0);
	while (a->next != 0)
	{
		temp = a->next;
		while (temp != 0)
		{
			if (a->value == temp->value)
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			temp = temp->next;
		}
		a = a->next;
	}
	return (0);
}

void	indexavorel(t_stack *a)
{
	t_stack	*temp1;
	t_stack	*temp2;
	int		i;

	temp2 = a;
	while (temp2 != 0)
	{
		temp1 = a;
		i = 0;
		while (temp1 != 0)
		{
			if (temp2->value > temp1->value)
				++i;
			temp1 = temp1->next;
		}
		temp2->index = i;
		temp2 = temp2->next;
	}
}

int	check_sort(t_stack *a)
{
	t_stack	*temp;

	temp = a->next;
	while (temp != 0)
	{
		if (temp->value < a->value)
			return (1);
		a = a->next;
		temp = temp->next;
	}
	return (0);
}

int	stack_qanak(t_stack *a)
{
	int	n;

	n = 0;
	while (a != 0)
	{
		++n;
		a = a->next;
	}
	return (n);
}