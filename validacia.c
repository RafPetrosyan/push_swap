/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validacia.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:19:34 by rafpetro          #+#    #+#             */
/*   Updated: 2024/07/16 15:19:38 by rafpetro         ###   ########.fr       */
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
			if (!((arr[i][j] >= '0' && arr[i][j] <= '9') ||
			check_isspace(arr[i][j]) == 1 ||
				arr[i][j] == '+' || arr[i][j] == '-'))
				return (1);
			if ((arr[i][j] == '-' || arr[i][j] == '+') &&
				(!(arr[i][j + 1] >= '0' && arr[i][j + 1] <= '9') ||
				(arr[i][j - 1] >= '0' && arr[i][j - 1] <= '9')))
				return (1);
			++j;
		}
		++i;
	}
	return (0);
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
				write(2, "Error\n", 7);
				exit(1);
			}
			temp = temp->next;
		}
		a = a->next;
	}
	return (0);
}
 