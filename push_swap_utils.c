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

void	ft_atoi_helper(char *nptr, int *sign, int *n, long long *numb)
{
	int	i;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		++i;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			*sign *= (-1);
		++i;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		*numb = *numb * 10 + nptr[i] - '0';
		++i;
		if (*numb != 0)
			++(*n);
	}
}

int	ft_atoi(char *nptr, char **arr, t_stack **a)
{
	int			n;
	int			sign;
	long long	numb;

	n = 0;
	sign = 1;
	numb = 0;
	ft_atoi_helper(nptr, &sign, &n, &numb);
	if (n <= 11)
	{
		if (!(sign * numb > 2147483647 || sign * numb < -2147483648))
			return (sign * numb);
	}
	ft_delete_arr(arr);
	free_stack(*a);
	exit(write(2, "Error\n", 6));
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
		}
		else
		{
			temp = *a;
			while (temp->next != 0)
			{
				temp = temp->next;
			}
			temp->next = new_node(ft_atoi(tver[i], tver, a));
		}
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

void	print_stack(t_stack *a)
{
	if (a == 0)
		return ;
	while (a != 0)
	{
		printf("%d\n", a->value);
		a = a->next;
	}
}
