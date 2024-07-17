/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:19:22 by rafpetro          #+#    #+#             */
/*   Updated: 2024/07/16 15:19:25 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	free_stack(t_stack *a)
{
	t_stack	*temp;

	while (a != 0)
	{
		temp = a;
		a = a->next;
		free(temp);
	}
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
