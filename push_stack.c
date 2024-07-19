/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafpetro <rafpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:18:26 by rafpetro          #+#    #+#             */
/*   Updated: 2024/07/19 10:59:57 by rafpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_astack(int argc, char **argv, t_stack **a)
{
	int		i;
	char	**tver;

	i = 1;
	while (i < argc)
	{
		tver = ft_split(argv[i]);
		if (tver == 0 || *tver == 0)
		{
			free_stack(*a);
			if (tver != 0)
				ft_delete_arr(tver);
			exit(0);
		}
		arr_add_stack(tver, a);
		ft_delete_arr(tver);
		++i;
	}
}

int	log2_n(int x)
{
	int	i;
	int	count;

	i = 2;
	count = 0;
	while (i < x)
	{
		count++;
		i *= 2;
	}
	return (count + 1);
}

int	log5_n(int x)
{
	int	i;
	int	count;

	i = 5;
	count = 0;
	while (i < x)
	{
		count++;
		i *= 5;
	}
	return (count + 1);
}
